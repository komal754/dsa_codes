#include<iostream.h>
using namespace std;
struct Node {
	int data;
	struct Node* left;
	struct Node* right;

	Node(int val)
	{
		data = val;
		Node* left = NULL;
		Node* right = NULL;
	}
};
int main()
{
	struct Node* root = new Node(3);
	root->left = new Node(7);
	root->right = new node(6);
	return 0;
}