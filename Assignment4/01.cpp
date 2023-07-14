#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 5, 7, 9};
    int c[] = {1, 3, 4, 5, 8};

    vector<int> v;
    int i = 0;
    int j = 0;
    int k = 0;
    int n = 5;
    while (i < n && j < n && k<n){
        if(a[i]==b[j] && b[j]==c[k]){
            v.push_back(a[i]);
            i++;
            j++;
            k++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(a[i]<c[k]){
            j++;
        }
        else{
            k++;
        }
    }

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }

        return 0;
}