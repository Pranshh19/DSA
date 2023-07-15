class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {

        map<int,int>mp;
        for(int i = 0; i<changed.size();i++){
            mp[changed[i]]++;
        }

        vector<int>res;

        for(int i = 0; i<changed.size(); i++){
            if(changed[i]==0){
                if(i<changed.size()-1 && changed[i+1]==0){
                 //   cout<<"HELLO";
                    res.push_back(changed[i]);
                    continue;
                }
            }
            int a = changed[i]*2;
            if(mp.find(changed[i])!=mp.end() && mp.find(a)!=mp.end()){
                mp[a]--;
                if(mp[a]==0){
                    mp.erase(a);
                }
                mp[changed[i]]--;
                if( mp[changed[i]]==0){
                    mp.erase(changed[i]);
                }
                res.push_back(changed[i]);
            }
        }
        if(res.empty() || res.size()!=changed.size()/2){
            return {};
        }

        return res;
    }
};