#ifndef __INFORMATION_INPUT_H_
#define	__INFORMATION_INPUT_H_

//信息输入
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


//输入性别
void Input_sex(char sex[]);
//输出性别
void Output_sex(char sex[]);


//输入学历
void Input_education(char education[]);
//输出学历
void Output_education(char education[]);

//输入职业
void Input_occupation(char occupation[]);
//输出职业
void Output_occupation(char occupation[]);

#endif /* __INFORMATION_INPUT_H_ */