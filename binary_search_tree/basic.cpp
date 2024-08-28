#include <iostream>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

Node *insertIntoBst(Node *&root, int d)
{
    if (root == NULL)
    {

        root = new Node(d);
        return root;
    }

    if(d>root->data){
        //right part me insert
        root->right=insertIntoBst(root->right,d);
    }
    else{
        root->left=insertIntoBst(root->left,d);

    }
    return root;
}

bool searchInBST(Node *root, int x) {
  // Write your code here.
  if (root == NULL) {
    return false;
  }

  if (root->data == x) {
    return true;
  }

  if (root->data > x) {
    searchInBST(root->left, x);
  } 
  else {
    searchInBST(root->right,x);
  }
}

void levelorderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana traversal khatam
            cout << endl;

            if (!q.empty())
            {
                // queue still have some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBst(root, data);
        cin >> data;
    }
}

int main()
{
    Node *root = NULL;
    cout << "enter the data of BST: -> " << endl;
    takeInput(root);

        cout << "Printing the BST: -> " << endl;
    levelorderTraversal(root);

    if(searchInBST(root,6)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}