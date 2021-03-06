/***************************************************************************************************
*FileName:
*Description:
*Author:xsx
*Data:
***************************************************************************************************/


/***************************************************************************************************/
/******************************************头文件***************************************************/
/***************************************************************************************************/

#include	"MyTools.h"

#include	<string.h>
#include	"stdio.h"
/***************************************************************************************************/
/**************************************局部变量声明*************************************************/
/***************************************************************************************************/





/***************************************************************************************************/
/**************************************局部函数声明*************************************************/
/***************************************************************************************************/







/***************************************************************************************************/
/***************************************************************************************************/
/***************************************正文********************************************************/
/***************************************************************************************************/
/***************************************************************************************************/
/***************************************************************************************************/

/************************************************************************
** 函数名:CheckStrIsSame
** 功  能:比较字符串是否相同
** 输  入:无
** 输  出:无
** 返  回：无
** 备  注：无
** 时  间:  
** 作  者：xsx                                                 
************************************************************************/
bool CheckStrIsSame(void *str1 , void * str2 , unsigned short len)
{
	unsigned char *p = (unsigned char *)str1;
	unsigned char *q = (unsigned char *)str2;
	unsigned short i=0;
	
	if((NULL == p) || (NULL == q))
		return false;
	
	for(i=0; i<len; i++)
	{
		if(*q++ != *p++)
			return false;
	}
	
	return true;
}

/***************************************************************************************************
*FunctionName: 
*Description: 
*Input: 
*Output: 
*Return: 
*Author: xsx
*Date: 
***************************************************************************************************/
unsigned char CheckItemPicIndex(void * item)
{
	if(strstr(item, "BNP\0"))
		return 0;
	else if(strstr(item, "CK-MB\0"))
		return 1;
	else if(strstr(item, "cTnI\0"))
		return 2;
	else if(strstr(item, "Myo\0"))
		return 3;
	else
		return 0;
}
