#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int a[] = {0,
               1,
               3,
               50,
               75};

    vector<vector<int>> v;
    vector<int> q;
    for (int i = 0; i < 4; i++){
        if((a[i+1]-a[i])==1){
            continue;
        }
        else{
            q.push_back(a[i] + 1);
            q.push_back(a[i+1] - 1);
        }
        if(!q.empty()){
            v.push_back(q);
            q.clear();
        }
    }
    
    for (int i = 0; i < v.size();i++){
        for (int j = 0; j < v[i].size();j++){
            cout << v[i][j] << " ";
        }
    }

        return 0;
}