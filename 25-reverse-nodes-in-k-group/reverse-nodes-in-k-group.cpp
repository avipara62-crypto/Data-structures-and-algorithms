/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;

    while (curr != nullptr) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}
    ListNode* findkthnode(ListNode* temp,int k){
        k=k-1;
        while(temp != NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevNode = NULL;
        while(temp!=NULL){
            ListNode* kthNode = findkthnode(temp,k);
            if(kthNode == NULL){
                if(prevNode){
                    prevNode->next = temp;
                    break;
                }
            }
            ListNode* nextNode = kthNode->next;
            kthNode->next = NULL;
            reverseList(temp);
            if(temp==head){
                head=kthNode;
            }
            else{
                prevNode->next =kthNode;
            }
            prevNode=temp;
            temp=nextNode;
        }
        
            return head;
    }
};