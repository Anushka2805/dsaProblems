class Solution {
public:
// tc is O(n) and sc is O(n)
    void inorderTraversalhelper(TreeNode* root,vector<int>& result){
        if(root == NULL){
            return;
        }
        inorderTraversalhelper(root->left,result);
        result.push_back(root->val);
        inorderTraversalhelper(root->right,result);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> result;
        inorderTraversalhelper(root,result);

        int start = 0;
        int end = result.size()-1;
        while(start<end){
            if(result[start] + result[end] == k){
                return true;
            }
            else if(result[start] + result[end] < k){
                start++;
            }
            else{
                end--;
            }
        }
        return false;
    }    
};