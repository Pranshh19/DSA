#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int k,n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 1; i < n-1;i++){
        if(a[i-1]==0 && a[i] == 0 && a[i+1]==0){
            k--;
        }
    }

    if(k==0){
        cout << "TRUE";
    }
    else{
        cout << "FALSE";
    }

        return 0;
}