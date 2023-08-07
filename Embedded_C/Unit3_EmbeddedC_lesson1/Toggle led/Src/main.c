/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Mahmoud Abou-Hawis
 * @description    : toggle LED in GPIOA
/*******************************************************************************/

#include "stdint.h"

#define  RCC_BASE             0x40021000	 				     /* The reset and clock control base address   */
#define  GPIOA_BASE           0x40010800					     /* The GPIO A base Address */
#define  APB2ENR_OFFSET	      0x18    						     /* The APB2ENR Register Offset */
#define  CRH_OFFSET           0x04       					     /* The CRH Register offset*/
#define  ODR_OFFSET           0x0C						     /* The ODR Register offset */
#define  RCC_APB2ENR          *((volatile uint32_t*)(RCC_BASE   + APB2ENR_OFFSET))   /* Pointer to APB2ENR register */
#define  GPIOA_CRH            *((volatile uint32_t*)(GPIOA_BASE + CRH_OFFSET ))      /* Pointer to CRH register */
#define  GPIOA_ODR            (*(((volatile unODR_t *)(GPIOA_BASE + ODR_OFFSET))))   /* Pointer to ODR register */
#define  RCC_IOPAEN	       2

/**********************************************************/
/* @brief structure to access pin 13 in ODR register
*/
/***********************************************************/
typedef union
{
	volatile uint32_t u32AllPins;      /*access all pins in register*/
	struct
	{
		volatile uint32_t reserved:13; /*unused pins */
		volatile uint32_t pin_13:1;    /*pin 13 bit*/
	} stPint;

} unODR_t;




int main(void)
{

	RCC_APB2ENR  |= (1 << RCC_IOPAEN);         /* Configure reset and clock control */
	GPIOA_CRH    &= 0xff0fffff;                /* Clear bits from index 20 to 24 in CRH register */
	GPIOA_CRH    |= 0x00200000;                /* Write 2 in bits from 20 to 24 in CRH register */
	while(1) 			           /*run forever*/
	{
		GPIOA_ODR.stPint.pin_13 = 1;  	   /*Led connected in pin 13 is on*/
		for(int i = 0 ; i < 6000 ; i++);   /* Delay */
		GPIOA_ODR.stPint.pin_13 = 0;	   /*Led connected in pin 13 is off*/
		for(int i = 0 ; i < 6000 ; i++);   /* Delay */
	}
}
