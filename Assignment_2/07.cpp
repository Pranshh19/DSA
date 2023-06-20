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
    int f1=0, f2 = 0;
    for (int i = 0; i < n-1;i++){
        if(a[i]<a[i+1]){
            f1++;
        }
        else if( a[i]>a[i+1]){
            f2++;
        }
    }
    if(f1==0 || f2==0){
        cout << "Monotonic";
    }
    else{
        cout << "Non-Monotonic";
    }

        return 0;
}