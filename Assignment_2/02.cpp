#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int n;
    cin >> n;

    int a[n];
    set<int> s;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        s.insert(a[i]);
    }

    int distinct = s.size();

    int candies = n / 2;

    if(distinct >= candies ){
        cout << candies;
    }
    else {
        cout << distinct;
    }

    return 0;
}