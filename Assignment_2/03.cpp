#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    int count = 1;
    int ans = INT_MIN;
    for (int i = 0; i < n-1;i++){
        for (int j = i + 1; j < n;j++){
            if(abs(a[i]-a[j])==1 || abs(a[i]-a[j])==0){
                count++;
            }
        }
        ans = max(count, ans);
        count = 1;
    }

    cout << "Ans: " << ans;

    return 0;
}