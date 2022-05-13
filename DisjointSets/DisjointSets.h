#pragma once

#define DATATYPE char
#define CAPACITY 20

//���ṹ��
struct Node {
	DATATYPE data;//��������
	int parent;//������������������
};

//���Ͻṹ��
struct DisjointSet {
	struct Node* arr;//����
	int size;//ʵ��Ԫ�ظ���
};

void init_DisjointSet(struct DisjointSet*);
void insert_DisjointSet(struct DisjointSet*, DATATYPE,int);
//�ж�Ԫ���Ƿ�����ͬһ������
int isSame(struct DisjointSet*, DATATYPE, DATATYPE);
//����Ԫ�أ����ظ�Ԫ���������ϵĸ����������±꣬ʧ�ܷ���-1
int search(struct DisjointSet*, DATATYPE);
//����Ԫ�أ����ظ�Ԫ������������±�,ʧ�ܷ���-1
int search2(struct DisjointSet*, DATATYPE);
void Union(struct DisjointSet*, DATATYPE, DATATYPE);
