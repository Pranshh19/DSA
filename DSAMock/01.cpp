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

    int i = 0;
    int j = 0;

    while(j<n){

        if(a[j]==0){
            j++;
        }
        else{
            swap(a[i], a[j]);
            i++;
        }
    }

    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }

        return 0;
}

