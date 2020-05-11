#include<iostream>
#include "Information_Input.h"
#include "Tree_Structure.h"
#include "main.h"
using namespace std;
//信息处理
/************************************************输入,输出SIB**********************************************/

void SIB_input(SIB *stb)
{
	//输入姓名
	  Input_name(stb->Name);
	 //输入性别
	  Input_sex(stb->Sex);
	 ////输入日期
	 Enter_Date_of_birth(stb->Date_of_birth);
	 Enter_Date_of_death(stb->Date_of_death);
	 //输入学历
	  Input_education(stb->Education);
	 //输入职业
	  Input_occupation(stb->Occupation);
}
void SIB_output(SIB *stb)
{
	//输出姓名
	Output_name(stb->Name);
	cout << '\t';
	//输出性别
	Output_sex(stb->Sex);
	cout << '\t';
	////输出日期
	Output_Date_of_birth(stb->Date_of_birth);
	cout << '\t';
	Output_Date_of_death(stb->Date_of_death);
	cout << '\t';
	//输出学历
	Output_education(stb->Education);
	cout << '\t';
	//输出职业
	Output_occupation(stb->Occupation);
}

/************************************************输入,输出日期**********************************************/


//输入出生日期
void Enter_Date_of_birth(int* a)
{
	cout << "请输入出生年：    ";
	cin >> a[0];
	cout << "请输入出生月：    ";
	cin >> a[1];
	while (Check_input_specification(a[1], 1, 12) == 1)   	//检查输入规范
	{
		cout << "输入的月份不合法，请重新输入:";
		cin >> a[1];
	}
	cout << "请输入出生日：    ";
	cin >> a[2];
	while (Check_input_specification(a[2], 1, 30) == 1)	//检查输入规范	
	{
		cout << "输入的日期不合法，请重新输入： ";
		cin >> a[2];
	}
}

//输出出生日期
void Output_Date_of_birth(int* a)
{
	cout << "出生日期:      ";
	Output_date(a);
}
//输入死亡日期
void Enter_Date_of_death(int* a)
{
	cout << "请输入死亡年：    ";
	cin >> a[0];
	cout << "请输入死亡月：    ";
	cin >> a[1];
	while (Check_input_specification(a[1], 1, 12) == 1)   	//检查输入规范
	{
		cout << "输入的月份不合法，请重新输入:";
		cin >> a[1];
	}
	cout << "请输入死亡日：    ";
	cin >> a[2];
	while (Check_input_specification(a[2], 1, 30) == 1)	//检查输入规范	
	{
		cout << "输入的日期不合法，请重新输入： ";
		cin >> a[2];
	}
}

//输出死亡日期
void Output_Date_of_death(int* a)
{
	cout << "死亡日期:        ";
	Output_date(a);
}

//检查输入规范
int Check_input_specification(int a, int min, int max)      // min <= a <= max
{
	if (min <= a && a <= max)
		return 0;

	return 1;
}
//输出日期
void Output_date(int* a)
{
	cout << a[0] << "年 " << a[1] << "月 " << a[2] << "日";
}

/************************************************输入,输出姓名,性别,学历，职业**********************************************/
//输入姓名
void Input_name(char name[])
{
	cout << "请输入姓名：      ";
	cin >> name;
}
//输出姓名
void Output_name(char name[])
{
	cout << name;
}

//输入性别
void Input_sex(char sex[])
{ 
	cout << "请输入性别：      ";
	cin >> sex;
}
//输出性别
void Output_sex(char sex[])
{
	cout <<"性别:"<< sex;
}


//输入学历
void Input_education(char education[])
{
	cout << "请输入学历：      ";
	cin >> education;
}
//输出学历
void Output_education(char education[])
{
	cout << "学历:"<<education;
}

//输入职业
void Input_occupation(char occupation[])
{
	cout << "请输入职业：      ";
	cin >> occupation;
}
//输出职业
void Output_occupation(char occupation[])
{
	cout << "职业:"<<occupation;
}


/************************************************文件读取和写入**********************************************/

//typedef struct SIB element;
//void In_File()                         //写入文件
//{
//	int i;
//	FILE* fp;
//	if ((fp = fopen("file.txt", "wb")) == NULL)
//	{
//		printf("打开文件错误\n");
//		exit(0);
//	}
//	for (i = 0; i < N; i++)
//		if (fwrite(&element[i], sizeof(element), 1, fp) != 1)
//			printf("写入错误\n");
//	fclose(fp);
//}
//
//
//void Read_File()                           //读取文件
//{
//	FILE* fp;
//	if ((fp = fopen("file.txt", "rb")) == NULL)
//	{
//		printf("打开文件错误\n");
//		exit(0);
//	}
//	for (N = 0; fread(&element[N], sizeof(element), 1, fp); N++);
//	if (!N)
//	{
//		printf("读取文件错误程序关闭\n");
//		exit(0);
//	}
//	fclose(fp);
//}
