#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int a[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};

    sort(a, a + 9);

    int n = 9;
    int ans = 9 / 2;

    if(a[ans]==a[0] || a[ans]==a[n-1]){
        cout << a[ans] << " ";
    }


    return 0;
}