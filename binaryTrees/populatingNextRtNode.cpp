#include <iostream>
#include <queue>
using namespace std;
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL || root->left == NULL){ //since its a perfect binary tree so if it wont have left child then right child will also not exist
            return root;
        }
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        Node* prev = NULL;
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            if(curr != NULL){
                if(curr->left != NULL){
                    q.push(curr->left);
                }
                if(curr->right != NULL){
                    q.push(curr->right);
                }
                if(prev != NULL){
                    prev->next = curr;
                }
            }else{
                if(q.size() == 0){
                    break;
                }
                q.push(NULL);

            }
            prev = curr;
        }
        return root;
    }
};