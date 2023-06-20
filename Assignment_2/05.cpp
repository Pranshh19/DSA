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

    sort(a, a + n);

    int ans = a[n - 1] * a[n - 2] * a[n - 3];

    cout << "\nANS: " << ans;

    return 0;
}