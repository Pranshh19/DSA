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


    auto index =  lower_bound(a, a+n, target);

    cout << "Index: " << index - a;

    return 0;
}
