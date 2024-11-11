
// class Solution {
// public:

//     TreeNode* mini_node(TreeNode* root)
//     {
//         TreeNode* temp=root;
//         while(temp->left!=NULL)
//         {
//             temp=temp->left;
//         }
//         return temp;
//     }
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         // no node
//         if(root==NULL)
//         {
//             return root;
//         }

//         if(root->val == key)
//         {
//             // no child
//             if(root->left == NULL && root->right==NULL)
//             {
//                 delete root;
//                 return NULL;
//             }
//             // 1 child 
//             // deleting right
//             if(root->left == NULL && root->right !=NULL)
//             {
//                 TreeNode* temp=root->right;
//                 delete root;
//                 return temp;
//             }
//             // deleting left 
//             if(root->right == NULL && root->left !=NULL)
//             {
//                 TreeNode* temp=root->left;
//                 delete root;
//                 return temp;
//             }
//             // 2 child
//             if(root->left !=NULL && root->right !=NULL)
//             {
//                 // right mai se mini lena hh
//                 int mini_value=mini_node(root->right)->val;
//                 root->val=mini_value;
//                 root->right=deleteNode(root->right, mini_value);
//                 return root;
//             }
//         }
//         else if(root->val > key)
//         {
//             root->left=deleteNode(root->left, key);
//             return root;
//         }
//         else{
//             root->right=deleteNode(root->right, key);
//             return root;
//         }
//         return root;
//     }
// };