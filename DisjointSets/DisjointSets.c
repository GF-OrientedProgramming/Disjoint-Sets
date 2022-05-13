#include"DisjointSets.h"
#include<stdlib.h>
#include<stdio.h>


void init_DisjointSet(struct DisjointSet* set)
{
	set->arr = malloc(sizeof(struct Node) * CAPACITY);
	if (NULL == set->arr) {
		printf("set->arr malloc failed\n");
		return;
	}
	set->size = 0;
}

void insert_DisjointSet(struct DisjointSet* set, DATATYPE data,int parent)
{
	if (set->size >= CAPACITY)
	{
		printf("set is full\n");
		return;
	}
	set->arr[set->size].data = data;
	set->arr[set->size].parent = parent;
	set->size++;
}

int search(struct DisjointSet* set, DATATYPE key)
{
	int idx=-1;
	for (int i = 0; i < set->size; i++)
	{
		if (key == set->arr[i].data) {
			idx = i;
			break;
		}
	}
	int i = idx;
	if (idx != -1) {
		while (set->arr[i].parent >= 0)
		{
			i = set->arr[i].parent;
		}
		return i;
	}
	else {
		printf("元素不存在\n");
		return -1;
	}
	
	
}

int isSame(struct DisjointSet* set, DATATYPE key1, DATATYPE key2)
{
	//查找key1,key2所属集合的根结点
	int idx1 = search(set, key1);
	if (-1 == idx1) {
		printf("key1元素不存在\n");
		return 0;
	}
	int idx2 = search(set, key2);
	if (-1 == idx2) {
		printf("key2元素不存在\n");
		return 0;
	}
	return idx1 == idx2 ? 1 : 0;
}

//将两个集合合并，传入两个根结点
void Union(struct DisjointSet* set, DATATYPE root1, DATATYPE root2)
{
	if (isSame(set, root1, root2)) {
		printf("这两个结点已属于同一个集合\n");
		return;
	}

}