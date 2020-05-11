#include<iostream>
#include "Information_Input.h"
#include "Tree_Structure.h"
#include "main.h"
using namespace std;
//��Ϣ����
/************************************************����,���SIB**********************************************/

void SIB_input(SIB *stb)
{
	//��������
	  Input_name(stb->Name);
	 //�����Ա�
	  Input_sex(stb->Sex);
	 ////��������
	 Enter_Date_of_birth(stb->Date_of_birth);
	 Enter_Date_of_death(stb->Date_of_death);
	 //����ѧ��
	  Input_education(stb->Education);
	 //����ְҵ
	  Input_occupation(stb->Occupation);
}
void SIB_output(SIB *stb)
{
	//�������
	Output_name(stb->Name);
	cout << '\t';
	//����Ա�
	Output_sex(stb->Sex);
	cout << '\t';
	////�������
	Output_Date_of_birth(stb->Date_of_birth);
	cout << '\t';
	Output_Date_of_death(stb->Date_of_death);
	cout << '\t';
	//���ѧ��
	Output_education(stb->Education);
	cout << '\t';
	//���ְҵ
	Output_occupation(stb->Occupation);
}

/************************************************����,�������**********************************************/


//�����������
void Enter_Date_of_birth(int* a)
{
	cout << "����������꣺    ";
	cin >> a[0];
	cout << "����������£�    ";
	cin >> a[1];
	while (Check_input_specification(a[1], 1, 12) == 1)   	//�������淶
	{
		cout << "������·ݲ��Ϸ�������������:";
		cin >> a[1];
	}
	cout << "����������գ�    ";
	cin >> a[2];
	while (Check_input_specification(a[2], 1, 30) == 1)	//�������淶	
	{
		cout << "��������ڲ��Ϸ������������룺 ";
		cin >> a[2];
	}
}

//�����������
void Output_Date_of_birth(int* a)
{
	cout << "��������:      ";
	Output_date(a);
}
//������������
void Enter_Date_of_death(int* a)
{
	cout << "�����������꣺    ";
	cin >> a[0];
	cout << "�����������£�    ";
	cin >> a[1];
	while (Check_input_specification(a[1], 1, 12) == 1)   	//�������淶
	{
		cout << "������·ݲ��Ϸ�������������:";
		cin >> a[1];
	}
	cout << "�����������գ�    ";
	cin >> a[2];
	while (Check_input_specification(a[2], 1, 30) == 1)	//�������淶	
	{
		cout << "��������ڲ��Ϸ������������룺 ";
		cin >> a[2];
	}
}

//�����������
void Output_Date_of_death(int* a)
{
	cout << "��������:        ";
	Output_date(a);
}

//�������淶
int Check_input_specification(int a, int min, int max)      // min <= a <= max
{
	if (min <= a && a <= max)
		return 0;

	return 1;
}
//�������
void Output_date(int* a)
{
	cout << a[0] << "�� " << a[1] << "�� " << a[2] << "��";
}

/************************************************����,�������,�Ա�,ѧ����ְҵ**********************************************/
//��������
void Input_name(char name[])
{
	cout << "������������      ";
	cin >> name;
}
//�������
void Output_name(char name[])
{
	cout << name;
}

//�����Ա�
void Input_sex(char sex[])
{ 
	cout << "�������Ա�      ";
	cin >> sex;
}
//����Ա�
void Output_sex(char sex[])
{
	cout <<"�Ա�:"<< sex;
}


//����ѧ��
void Input_education(char education[])
{
	cout << "������ѧ����      ";
	cin >> education;
}
//���ѧ��
void Output_education(char education[])
{
	cout << "ѧ��:"<<education;
}

//����ְҵ
void Input_occupation(char occupation[])
{
	cout << "������ְҵ��      ";
	cin >> occupation;
}
//���ְҵ
void Output_occupation(char occupation[])
{
	cout << "ְҵ:"<<occupation;
}


/************************************************�ļ���ȡ��д��**********************************************/

//typedef struct SIB element;
//void In_File()                         //д���ļ�
//{
//	int i;
//	FILE* fp;
//	if ((fp = fopen("file.txt", "wb")) == NULL)
//	{
//		printf("���ļ�����\n");
//		exit(0);
//	}
//	for (i = 0; i < N; i++)
//		if (fwrite(&element[i], sizeof(element), 1, fp) != 1)
//			printf("д�����\n");
//	fclose(fp);
//}
//
//
//void Read_File()                           //��ȡ�ļ�
//{
//	FILE* fp;
//	if ((fp = fopen("file.txt", "rb")) == NULL)
//	{
//		printf("���ļ�����\n");
//		exit(0);
//	}
//	for (N = 0; fread(&element[N], sizeof(element), 1, fp); N++);
//	if (!N)
//	{
//		printf("��ȡ�ļ��������ر�\n");
//		exit(0);
//	}
//	fclose(fp);
//}
