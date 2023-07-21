class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int> a;
        ListNode*p = head;
        int t = 0;
        while(p!=NULL){
            a.push_back(p->val);
            t += p->val;
            p = p->next;
        }
        if(t==0)return NULL;
        unordered_map<int,int> m;
        stack<pair<int,int>>st;
        int i = 0, sum = 0;
        m[0]=1;
        while(i<a.size()){
            if(a[i]==0){
                i+=1;
                continue;
            }
            sum += a[i];
            if(m.find(sum)!=m.end()){
                while(!st.empty() && st.top().first!=sum){
                    m.erase(st.top().first);
                    st.pop();
                }
            }
            else{
                m[sum] = 1;
                st.push({sum,i});
            }
            i+=1;
        }
        vector<int> ab;
        while(!st.empty()){
            ab.push_back(a[st.top().second]);
            st.pop();
        }
        reverse(ab.begin(),ab.end());
        for(auto x:ab)cout<<x<<' ';
        p = head;
        i = 0;
        while(i<ab.size()){
            p->val = ab[i];
            if(i+1==ab.size()){
                break;
            }
            p = p->next;
            i+=1;
        }
        p->next = NULL;
        return head;
    }
};