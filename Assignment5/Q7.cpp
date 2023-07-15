class Solution {
public:
    int findMin(vector<int>& a) {
        
        int start = 0;
        int end = a.size()-1;
        int mid = (start+end)/2;

        while(start<end){

            if(a[mid]>=a[start]){
                if(a[start]>a[end]){
                    start = mid+1;
                }
                else{
                    end = mid;
                }
            }
            else{
                end = mid ;
            }
            mid = (start+end)/2;
            
        }
        cout<<"MID: "<<mid;
        return a[mid];
    }
};