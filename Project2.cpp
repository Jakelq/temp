//Temp Project 2.cpp
// This is what im thinking havent completed the vector storage for all the nodes yet.

#include "Project2.h"



int main()
{
	vector<struct node> tree;
	rootNode(tree, "this is a test");

	cout << tree[0].ID << endl;
	system("pause");
	return 0;
}
