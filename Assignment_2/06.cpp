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
    int target;
    cin >> target;
    auto it = lower_bound(a, a + n, target);

    if(*it == target){
        cout<< it - a;
    }
    else{
        cout<< -1;
    }

    return 0;
}