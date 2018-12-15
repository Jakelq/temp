

#include "FinalProject.h"



int main()
{
	vector<struct node> tree;
	rootNode(tree, "this is a test");

	cout << tree[0].ID << endl;
	system("pause");
	return 0;
}