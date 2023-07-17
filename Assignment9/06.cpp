// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long long int l=0,r=n,ans=0;
        while(l<=r){
          long long mid=(l+r)/2;
            if(isBadVersion(mid)==true){
                ans=mid;
                r=mid-1;
                
            }
            else if(isBadVersion(mid)==false){
                l=mid+1;
            }
        }
        
        return int(ans);
    }
};