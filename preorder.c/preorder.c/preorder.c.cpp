// preorder.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data)
{
    struct node* n;
    n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(struct node* root) {
    if (root!= NULL) {
        printf("%d", root->data);
        preOrder(root->left);
        preOrder(root->right);

    }
}

int main()
{


    struct node* p = create node(4);
    struct node* p1 = create node(1);
    struct node* p2 = create node(6);
    struct node* p3 = create node(5);
    struct node* p4 = create node(2);


    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preOrder(p);
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
