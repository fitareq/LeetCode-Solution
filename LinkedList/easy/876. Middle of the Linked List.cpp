
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *hare, *torToise;
        hare = torToise = head;
        
        while(hare && hare -> next){
            hare = hare -> next -> next;
            torToise = torToise -> next;
        }
        
        return torToise;
    }
};