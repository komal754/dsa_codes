#include<iostream>
using namespace std;


class BinaryTreeNode {
public:
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode() {
        if (left) {
            delete left;
        }
        if (right) {
            delete right;
        }
    }
};


int countNode(BinaryTreeNode* root){
    if(root==NULL){
        return 0;
    }

    int  ans=1+countNode(root->left)+countNode(root->right);
    return ans;
}

bool isMaxorder(BinaryTreeNode *root){
    //if leave node then true as these are are considered already in heap

if(root->left==NULL && root->right==NULL){
    return true;
}
     //       19
     //       /      
     //     12
     //
if(root->right==NULL){
    return (root->data>=root->left->data);
}

else{
    bool left=isMaxorder(root->left);
    bool right=isMaxorder(root->right);

    return(left && right && (root->data>=root->left->data && root->data>=root->right->data));
}
}
bool isComplete(BinaryTreeNode* root,int i,int cnt){

if(root==NULL){
    return true;
}

//because max possible index=size-1
if(i>=cnt){
    return false;
}
else{
    bool left=isComplete(root->left,2*i+1,cnt);
    bool right=isComplete(root->right,2*i+2,cnt);
    return (left&&right);   
}
}
int main(){

//0-based indexing present 

int index=0;

// Input:
//        10
//      /   \
//     20   30 
//   /   \
//  40   60
// Output: 0

// BinaryTreeNode* root=new BinaryTreeNode(10);
// root->left=new BinaryTreeNode(20);   //level-2
// root->right=new BinaryTreeNode(30);
// root->left->left=new BinaryTreeNode(40); //level 3;
// root->left->right=new BinaryTreeNode(60);

// Input:
//       5
//     /  \
//    2    3
// Output: 1

BinaryTreeNode* root=new BinaryTreeNode(5);
root->left=new BinaryTreeNode(2);   //level-2
root->right=new BinaryTreeNode(3);
int totalcount=countNode(root);
if(isComplete(root,index,totalcount) && isMaxorder(root) ){
    cout<<"Heap Binary Tree";
}
else{
    cout<<" Not a Heap Binary Tree";
}
}