#ifndef __TREE_STRUCTURE_H_
#define	__TREE_STRUCTURE_H_
// 树形结构



typedef struct SIB* pointer;
struct SIB {
	char Name[5];								//姓名，性别，出生日期，死亡日期，学历，职业
	char Sex[4];
	int  Date_of_birth[3];
	int  Date_of_death[3];
	char Education[10];
	char Occupation[10];

	pointer lchild, rchild;
};


#endif /* __TREE_STRUCTURE_H_ */