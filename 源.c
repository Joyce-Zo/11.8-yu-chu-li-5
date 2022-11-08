#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

				预处理指令

		1.	条件编译指令
#define DEBUG
int main()
{
	int a = 10;
	int b = a - 5;

#ifdef DEBUG	// 如果DEBUG有定义则执行
	printf("%d ", b);
#endif	//	和ifdef共用

#if defined DEBUG
	printf("%d ", b);		// ifdef | if defined 完全相同
 //#endif
 
下面是如果没有定义，则执行
#ifndef DEBUG	//	if n def
	printf("%d ", b);
#endif	

#if !defined DEBUG
	printf("%d ", b);		// ifndef | if !defined 完全相同
 #endif
	return 0;
}

		1.1 单分支的条件编译指令
//int main()
//{
//	int a = 10;
//	int b = a - 5;
//
//#if 1-1	// 如果#if 后面常量表达式为真（不为0），则下面执行
//	printf("%d ", b);
//#endif	//	和ifdef共用
//	return 0;
//}

		1.2 多分支的条件编译
int main()
{
#if 1==3		//  if后和elif后else后跟常量表达式
	printf("666\n");	// 满足执行，下面不执行
#elif 2==1
	printf("888\n");
#else
	printf("777\n");	//前面都不执行，才会到这里
#endif
	return 0;
}

			1.3 嵌套指令
int main()
{
#if defined(Os_UNEX)
		#ifde干 OPTIONIa
			unix_version_optioniO();
		#endif
		#ifdef OPTION2
			unix_version_option2O();
		#endif
#elif defined(Os_MsDos)
		#ifdef OPTTON2
			msdos_version_option2O();
		#endif
#endif
	return 0;
}

			2.文件包含
	" " 查找范围：先在源文件目录下查找，再去安装路径的标准位置找，共两级，找不到提示编译错误
  一般是自己的头文件
	< >			：在源文件目录下找，只有一级。
  一般是库文件

	如果头文件被多次包含：
	法1
#ifndef __ADD_H__	//  如果 ADD.H头文件没有被定义，则下面定义
#define __ADD_H__
int ADD(int x, int y);
#endif
	法2		常用
#define once
int ADD(int x, int y);