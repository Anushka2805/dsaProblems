class Solution {
public:
// tc = O(h) and sc = 0(h)
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL){
            return NULL;
        }
        if(root->val == val){
            return root;
        }
        if(val< root->val){
            return searchBST(root->left,val);
        }
        else{
            return searchBST(root->right,val);
        }
    }
};