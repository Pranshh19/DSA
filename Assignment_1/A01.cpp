#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int n;
    cin >> n;
    int a[n];
    
    int target;
    cin >> target;
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }

    int sum;
    vector<int> v;

    for (int i = 0; i < n-1;i++){
        for (int j = i+1; j < n;j++){
            if(a[i]+a[j]==target){
                v.push_back(i);
                v.push_back(j);
                break;
            }
        }
    }

    cout << v[0] << " " << v[1];

    return 0;
}