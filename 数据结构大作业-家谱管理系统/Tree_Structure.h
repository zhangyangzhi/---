#ifndef __TREE_STRUCTURE_H_
#define	__TREE_STRUCTURE_H_
// ���νṹ



typedef struct SIB* pointer;
struct SIB {
	char Name[5];								//�������Ա𣬳������ڣ��������ڣ�ѧ����ְҵ
	char Sex[4];
	int  Date_of_birth[3];
	int  Date_of_death[3];
	char Education[10];
	char Occupation[10];

	pointer lchild, rchild;
};


#endif /* __TREE_STRUCTURE_H_ */