#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    vector<int> nums;

    int n;
    cin >> n;

    for (int i = 0; i < n;i++){
        cin >> v[i];
    }

    sort(nums.begin(), nums.end());
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 == 0)
        {
            ans += nums[i];
        }
        }
        return ans;



    return 0;
}