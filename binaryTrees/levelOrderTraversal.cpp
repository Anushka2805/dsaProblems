class Solution {
public:

// tc and sc is O(n)
    void traversal(TreeNode* root,vector<vector<int>>& result){
        queue<TreeNode*> q;
        if(root == NULL){
            return;
        }
        q.push(root);
        while(!q.empty()){
            vector<int> level;
            int q_size = q.size();
            for(int i = 0;i<q_size;i++){
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);

                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            } 
            result.push_back(level);   
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        traversal(root,result);
        return result;
    }
};