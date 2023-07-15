class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int i,j,c=0,ans=arr1.size();
        
        for(i=0;i<arr1.size();i++){
            c=0;
            for(j=0;j<arr2.size();j++){
                if(abs(arr1[i]-arr2[j])<=d){
                   c++;
                }
            }
            if(c>0){
                ans--;
            }
        }
        return ans;
    }
};