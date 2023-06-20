#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n;i++){
        cin >> a[i];
    }

    sort(a,a+n);

    for (int i = 0; i < n-1;i++){
        if(a[i]==a[i+1]){
            cout<<true;
            break;
        }
    }

   cout<<false;

    return 0;
}