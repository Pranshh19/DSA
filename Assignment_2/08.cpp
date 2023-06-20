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

    sort(a,a+n);
    int k;
    cin >> k;
    int mini = a[0];
    int maxi = a[n - 1];

    int ans = maxi - mini;

    if (ans <= 2 * k)
    {
       cout<< 0;
        }
        else {
           cout<< ans - 2*k;
        }

        return 0;
}