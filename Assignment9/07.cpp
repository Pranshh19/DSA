#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int n = 5; int a[] = {2,4,1,3,5};
    int count = 0;

    for (int i = 0; i < n-1; i++){
        for (int j = i + 1; j<n; j++){
            if(a[i]>a[j]){
                count++;
            }
        }
    }

    cout << "Inversion: " << count;

    return 0;
}