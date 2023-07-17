#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int a [] = {2,7,11,15}, target = 9;

    int n = 4;
    int f = 0;

    for (int i = 0; i<4; i++){
        for (int j = i + 1; j<4; j++){
            if(a[i]+a[j]==target){
                cout << a[i] << " " << a[j];
                f = 1;
                break;
            }
            if(f==1){
                break;
            }
        }
    }

        return 0;
}