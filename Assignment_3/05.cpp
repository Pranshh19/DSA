class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();
        vector<int>v;
        
        
        if(digits[n-1]<9){
            digits[n-1]++;
            return digits;
        }
        else{
            reverse(digits.begin(),digits.end());
            int digit; int sum; int carry = 0;
            digits[0]++;
            for(int i = 0; i<n; i++){
                sum = digits[i]+carry;
                digit = sum%10;
                v.push_back(digit);
                carry = sum/10;
            }
            while(carry!=0){
                digit =carry%10;
                v.push_back(digit);
                carry = carry/10;
            }
        }
    reverse(v.begin(),v.end());

        return v;
        

    }
};