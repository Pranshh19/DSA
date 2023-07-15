#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int a[] = {1,2,3};
    int b[] = {2,4,6};

    vector<vector<int>> v;
    vector<int> li;
    int f = 0;
    for (int i = 0; i < 3; i++){
        f = 0;
        for (int j = 0; j < 3; j++){
            if(a[i]==b[j]){
                f = 1;
            }
        }
        if(f==0){
            li.push_back(a[i]);
        }
    }
    v.push_back(li);
    li.clear();

     for (int i = 0; i < 3; i++){
        f = 0;
        for (int j = 0; j < 3; j++){
            if(b[i]==a[j]){
                f = 1;
            }
        }
        if(f==0){
            li.push_back(b[i]);
        }
    }  
    v.push_back(li);
    li.clear();

    for (int i = 0; i < v.size(); i++){
        f = 0;
    for (int j = 0; j < v[i].size(); j++){
        cout << v[i][j] << " ";
        }
    }  
    return 0;
}