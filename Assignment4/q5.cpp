class Solution {
public:
    int arrangeCoins(int n) {
        int i = 0;
        for(i = 0; i<n; i++){
            n = n-(i+1);
        }
        return i;

    }
};