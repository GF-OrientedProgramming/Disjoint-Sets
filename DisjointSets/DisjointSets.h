#pragma once

#define DATATYPE char
#define CAPACITY 20

//结点结构体
struct Node {
	DATATYPE data;//数据类型
	int parent;//父结点所在数组的索引
};

//集合结构体
struct DisjointSet {
	struct Node* arr;//数组
	int size;//实际元素个数
};

void init_DisjointSet(struct DisjointSet*);
void insert_DisjointSet(struct DisjointSet*, DATATYPE,int);
//判断元素是否属于同一个集合
int isSame(struct DisjointSet*, DATATYPE, DATATYPE);
//查找元素，返回该元素所属集合的根结点的数组下标，失败返回-1
int search(struct DisjointSet*, DATATYPE);
//查找元素，返回该元素所在数组的下标,失败返回-1
int search2(struct DisjointSet*, DATATYPE);
void Union(struct DisjointSet*, DATATYPE, DATATYPE);
