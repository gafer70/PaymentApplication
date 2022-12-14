/************************************************************************************/
/******************************Author: Mohammed Gaafar*******************************/
/******************************File: card.h******************************************/
/************************************************************************************/

#ifndef _CARD_H
#define _CARD_H

typedef unsigned char uint8_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;


typedef enum EN_cardError_t
{
	OK_cardError, WRONG_NAME, WRONG_EXP_DATE, WRONG_PAN
}EN_cardError_t;


typedef struct ST_cardData_t
{
	uint8_t cardHolderName[25];
	uint8_t primaryAccountNumber[25];
	uint8_t cardExpirationDate[6];
}ST_cardData_t;


EN_cardError_t getCardHolderName(ST_cardData_t*);
EN_cardError_t getCardExpiryDate(ST_cardData_t*);
EN_cardError_t getCardPAN(ST_cardData_t*);

#endif



