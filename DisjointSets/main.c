#include"DisjointSets.h"

int main()
{
	struct DisjointSet myset;
	init_DisjointSet(&myset);
	insert_DisjointSet(&myset, 'A', -6);
	insert_DisjointSet(&myset, 'B', 0);
	insert_DisjointSet(&myset, 'C', -2);
	insert_DisjointSet(&myset, 'D', -5);
	insert_DisjointSet(&myset, 'E', 1);
	insert_DisjointSet(&myset, 'F', 1);
	insert_DisjointSet(&myset, 'G', 2);
	insert_DisjointSet(&myset, 'H', 3);
	insert_DisjointSet(&myset, 'I', 3);
	insert_DisjointSet(&myset, 'J', 3);
	insert_DisjointSet(&myset, 'K', 4);
	insert_DisjointSet(&myset, 'L', 4);
	insert_DisjointSet(&myset, 'M', 7);
	//int index = search(&myset, 'C');
	//int flag=isSame(&myset, 'E', 'F');
	//int flag = search(&myset, 'K');
	Union(&myset, 'I', 'C');
	return 0;
}