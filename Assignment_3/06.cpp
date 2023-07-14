#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int a[] = {2, 2, 1};

    int ans = 0;

    for (int i = 0; i < 3; i++){
        ans ^= a[i];
    }

    cout << ans;

    return 0;
}