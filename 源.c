#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

				Ԥ����ָ��

		1.	��������ָ��
#define DEBUG
int main()
{
	int a = 10;
	int b = a - 5;

#ifdef DEBUG	// ���DEBUG�ж�����ִ��
	printf("%d ", b);
#endif	//	��ifdef����

#if defined DEBUG
	printf("%d ", b);		// ifdef | if defined ��ȫ��ͬ
 //#endif
 
���������û�ж��壬��ִ��
#ifndef DEBUG	//	if n def
	printf("%d ", b);
#endif	

#if !defined DEBUG
	printf("%d ", b);		// ifndef | if !defined ��ȫ��ͬ
 #endif
	return 0;
}

		1.1 ����֧����������ָ��
//int main()
//{
//	int a = 10;
//	int b = a - 5;
//
//#if 1-1	// ���#if ���泣�����ʽΪ�棨��Ϊ0����������ִ��
//	printf("%d ", b);
//#endif	//	��ifdef����
//	return 0;
//}

		1.2 ���֧����������
int main()
{
#if 1==3		//  if���elif��else����������ʽ
	printf("666\n");	// ����ִ�У����治ִ��
#elif 2==1
	printf("888\n");
#else
	printf("777\n");	//ǰ�涼��ִ�У��Żᵽ����
#endif
	return 0;
}

			1.3 Ƕ��ָ��
int main()
{
#if defined(Os_UNEX)
		#ifde�� OPTIONIa
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

			2.�ļ�����
	" " ���ҷ�Χ������Դ�ļ�Ŀ¼�²��ң���ȥ��װ·���ı�׼λ���ң����������Ҳ�����ʾ�������
  һ�����Լ���ͷ�ļ�
	< >			����Դ�ļ�Ŀ¼���ң�ֻ��һ����
  һ���ǿ��ļ�

	���ͷ�ļ�����ΰ�����
	��1
#ifndef __ADD_H__	//  ��� ADD.Hͷ�ļ�û�б����壬�����涨��
#define __ADD_H__
int ADD(int x, int y);
#endif
	��2		����
#define once
int ADD(int x, int y);