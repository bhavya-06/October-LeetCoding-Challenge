// Rotate List

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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode*temp = head;
        
        int cnt = 0;
        
        vector<pair<int,int>>v;
        
        while(temp != NULL){
            v.push_back(make_pair(cnt,temp->val));
            cnt++;
            temp = temp->next;
        }
        
        for(int i=0;i<v.size();i++){
            v[i].first = (v[i].first + k) % cnt;
        }
        
        sort(v.begin(),v.end());
        
        int i=0;
        
        temp = head;
        
        while(temp != NULL){
            temp->val = v[i].second;
            i++;
            temp = temp->next;
        }
        
        return head;
    }
};
