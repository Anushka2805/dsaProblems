class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if( root == NULL){
            return NULL;
        }
        if(key<root->val){
            root->left = deleteNode(root->left,key);
        }
        else if(key> root->val){
            root->right = deleteNode(root->right,key);
        }
        else{
            if(!root->left){
                TreeNode* right = root->right;
                delete root;
                return right;
            }
            if(!root->right){
                TreeNode* left = root->left;
                delete root;
                return left;
            }
            TreeNode* successor = root->right;
            while(successor->left){
                successor = successor->left;
            }
            root->val= successor->val;
            root->right = deleteNode(root->right,successor->val);
        }
        return root;
    }
};