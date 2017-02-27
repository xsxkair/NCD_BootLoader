/***************************************************************************************************
*FileName:IAPMessage_Fun
*Description:������������
*Author:xsx
*Data:2017��2��20��14:31:24
***************************************************************************************************/


/***************************************************************************************************/
/******************************************ͷ�ļ�***************************************************/
/***************************************************************************************************/
#include	"IAPMessage_Fun.h"

#include	"LCD_Driver.h"

#include	"Define.h"

#include	<string.h>
#include	"stdio.h"
#include 	"stdlib.h"

/***************************************************************************************************/
/**************************************�ֲ���������*************************************************/
/***************************************************************************************************/
static char buf[300];
/***************************************************************************************************/
/**************************************�ֲ���������*************************************************/
/***************************************************************************************************/

/***************************************************************************************************/
/***************************************************************************************************/
/***************************************����********************************************************/
/***************************************************************************************************/
/***************************************************************************************************/
/***************************************************************************************************/

void clearStatusText(void)
{
	memset(buf, 0, 300);
	DisText(0x2a00, buf, 240);
}

void showIapStatus(char * statusStr)
{
	strcat(buf, statusStr);
	DisText(0x2a00, buf, strlen(buf));
}


void showIapProgess(unsigned char num)
{
	float value = num;
	value *= 3.65;
	
	BasicPic(0x2a50, 1, 137, 230, 325, 230+value, 365, 390, 380);
}

void showIapVersion(unsigned short version)
{
	char tempbuf[50];
	
	memset(tempbuf, 0, 50);
	sprintf(tempbuf, "%d.%d.%02d", version/1000, version%1000/100, version%100);

	DisText(0x2a60, tempbuf, strlen(tempbuf));
}

