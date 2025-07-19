#include <iostream>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
//tc is O(n)
    void deleteNode(ListNode* node) {
        node->val = node->next->val; //current nodes takes on next nodes val
        node->next = node->next->next; //skip the next node
    }
};