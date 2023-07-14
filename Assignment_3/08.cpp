#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int a[][2] = {{0, 30}, {5, 10}, {15, 20}};
    int f = 0;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            if(a[i][1]>a[i][0]){
                cout << "FALSE";
                f = 1;
                break;
            }
        }
        if(f==1){
            break;
        }
    }
    if(f==0)
    cout << "TRUE";

    return 0;
}