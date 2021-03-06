/***************************************************************************************************
*FileName:SystemInit
*Description: 系统所有模块初始化
*Author : xsx
*Data: 2016年4月21日14:18:28
***************************************************************************************************/

/***************************************************************************************************/
/******************************************头文件***************************************************/
/***************************************************************************************************/
#include	"SystemInit.h"

#include	"Led_Driver.h"
#include 	"Usart6_Driver.h"
#include 	"Iwdg_Driver.h"
#include	"user_fatfs.h"

#include	"Delay.h"
/***************************************************************************************************/
/**************************************局部变量声明*************************************************/
/***************************************************************************************************/

/***************************************************************************************************/
/**************************************局部函数声明*************************************************/
/***************************************************************************************************/
extern void SystemInit(void);
/***************************************************************************************************/
/***************************************************************************************************/
/***************************************正文********************************************************/
/***************************************************************************************************/
/***************************************************************************************************/
/***************************************************************************************************/

/***************************************************************************************************
*FunctionName：MySystemInit
*Description：系统初始化
*Input：None
*Output：None
*Author：xsx
*Data：2016年4月21日14:20:44
***************************************************************************************************/
void MySystemBSPInit(void)
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);
	delay_ms(10);
	SystemInit();						//手动系统初始化
	delay_ms(10);
	
	Led_GPIOInit();						//系统指示灯初始化
	delay_ms(1);

	Usart6_Init();						//串口6初始化
	delay_ms(1);
	
	FatfsInit();						//文件系统初始化
	
//	IWDG_Init(3, 5000);					//看门狗初始化,超时时间2S
	delay_ms(1);
}

