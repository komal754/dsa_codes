#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{

    cout << "Enter the data" << endl;
    int data;
    cin >> data;

    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "enter the left element of" << data << endl;
    root->left = buildTree(root->left);

    cout << "enter the right element of" << data << endl;
    root->right = buildTree(root->right);

    return root;
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

// inorder:
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int height(Node* root){
if(root==NULL){
    return 0;
}

int left=height(root->left);
int right=height(root->right);

int ans=max(left,right)+1;
return ans;
}



    int diameterOfBinaryTree(Node* root) {
        if(root==NULL){
            return 0;
        }

        int op1=diameterOfBinaryTree(root->left);
        int op2=diameterOfBinaryTree(root->right);
        int op3=height(root->left)+height(root->right)+1;

        int ans=max(op1,max(op2,op3));
        return ans;
    }



    bool isBalanced(Node* root) {
        if(root==NULL){
            return true;
        }

        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        bool diff=abs(height(root->left)-height(root->right))<=1;

        if(left && right && diff){
            return true;
        }
        return false;
        
    }

Node *buildfromlevelorder(Node *root)
{
    queue<Node *> q;
    cout << "enter the data for root: " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "enter the left node for:" << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }

        cout << "enter the right node for: " << temp->data << endl;
        int rightdata;
        cin >> rightdata;

        if (rightdata != -1)
        {
            temp->right = new Node(rightdata);
            q.push(temp->right);
        }
    }
return root;
}
int main()
{

    Node *root;

    // build tree
    // root = buildTree(root);
    // cout << "printing level order traversal: " << endl;
    // levelorderTraversal(root);
    // // 1 3 7 -1 -1 11 -1 -1 5 18 -1 -1 -1
    // cout << "inorder" << endl;
    // inorder(root);
    // cout << "preorder" << endl;
    // preorder(root);
    // cout << "postorder" << endl;
    // postorder(root);

    root=buildfromlevelorder(root);
    cout<<endl;
    cout<<" level order traversal :"<<endl;
    levelorderTraversal(root);
cout<<endl;
cout<<"height of tree: "<<height(root)<<endl;
cout<<"diameter of tree: "<<diameterOfBinaryTree(root)<<endl;

if(isBalanced(root)){
    cout<<"tree is balanced "<<endl;
}
else{
    cout<<"tree is not balanced"<<endl;
}
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    return 0;
}
