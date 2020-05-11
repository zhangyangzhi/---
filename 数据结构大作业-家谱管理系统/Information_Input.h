#ifndef __INFORMATION_INPUT_H_
#define	__INFORMATION_INPUT_H_

//��Ϣ����
#include "Tree_Structure.h"

void SIB_input(SIB* stb);
void SIB_output(SIB* stb);


void Output_date(int* a);
int Check_input_specification(int a, int min, int max);
void Output_Date_of_death(int* a);
void Enter_Date_of_death(int* a);
void Output_Date_of_birth(int* a);
void Enter_Date_of_birth(int* a);


void Input_name(char name[]);
void Output_name(char name[]);


//�����Ա�
void Input_sex(char sex[]);
//����Ա�
void Output_sex(char sex[]);


//����ѧ��
void Input_education(char education[]);
//���ѧ��
void Output_education(char education[]);

//����ְҵ
void Input_occupation(char occupation[]);
//���ְҵ
void Output_occupation(char occupation[]);

#endif /* __INFORMATION_INPUT_H_ */