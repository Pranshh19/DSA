#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int a[] = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int>v;
    sort(a, a + 8);
    int prev;
    for(int i = 0; i<8; i++){
        if(a[i]==a[i+1] && a[i]!=prev){
            v.push_back(a[i]);
            prev = a[i];
        }
    }

    cout << "VEctor: ";

    
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }


    return 0;
}