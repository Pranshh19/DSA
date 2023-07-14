class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        vector<vector<int>>ans;
        if(n<3)return ans;
        for(int i=0;i<n-2;i++){
            
            if(i==0 || (i>0 && a[i]!=a[i-1])){
                int lo=i+1, hi=n-1,sum=0-a[i];
                
            while(lo<hi){
                if(a[lo]+a[hi]==sum){
                    vector<int>temp;
                    temp.push_back(a[lo]);
                    temp.push_back(a[hi]);
                    temp.push_back(a[i]);
                    ans.push_back(temp);
                    
            while(lo<hi && a[lo]==a[lo+1])lo++;
            while(lo<hi && a[hi]==a[hi-1])hi--;
                    
                    lo++;hi--;
                }
                else if(a[lo]+a[hi]>sum)hi--;
                else lo++; 
            } 
          }
        } 
    return ans;
    }
};
