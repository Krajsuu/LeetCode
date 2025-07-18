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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* mergedList = nullptr;
        ListNode* temp = nullptr;
        int k = lists.size();
        for(auto x : lists) if(!x) k--;
        if(k==0) return nullptr;
        else k = lists.size();
        while(k>1) {
            int index = 0;
            while(index < lists.size() && !lists[index]) index++;
            if(lists.size() - index <= 1) {
                k = lists.size() - index;
                break;
            };
            for(int i = 1; i < lists.size(); i++){
                if(lists[i]){
                    if( lists[i]->val < lists[index]->val){
                    index = i;
                    }
                }
            }
            if(!mergedList) {
                mergedList = new ListNode(lists[index]->val);
                temp = mergedList;
            } else {
                ListNode *node = new ListNode(lists[index]->val);
                temp->next = node;
                temp = temp->next;
            }
            lists[index] = lists[index]->next;
            if(!lists[index]) k--;
        }
        if(k==1){
            for(auto x : lists){
                while(x){
                    if(!mergedList) {
                        mergedList = new ListNode(x->val);
                        temp = mergedList;
                    } else {
                        ListNode *node = new ListNode(x->val);
                        temp->next = node;
                        temp = temp->next;
                    }
                    x = x->next;
                }
            }
        }
        return mergedList;
    }
};