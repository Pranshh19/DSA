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

    for(int i = 0; i < n-1;i++){
        if(a[i] == 0){
        for(int j = i + 1; j < n;j++){
            if(a[j]!=0){
                swap(a[i], a[j]);
                break;
            }
        }
        }
    }


        for(int i = 0; i < n;i++){
        cout << a[i] << " ";
        }
    

    //Efficient Approach would be to sort and reverse

        return 0;
}