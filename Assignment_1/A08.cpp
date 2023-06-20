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

    int sum;
    int s1;
    int s2;
    int sn;
    s1 = ((n) * (n + 1)) / 2;
    sn = ((n) * (n + 1) * (2*n + 1)) / 6;
    for (int i = 0; i < n;i++){
        s1 -= a[i];
        sn -= pow(a[i], 2);
    }

    


    int missingNumber =( s1 +sn/s1)/2;
    int repeating= missingNumber -s1;

    cout << missingNumber << " \n";
    cout << repeating << " \n";

    return 0;
}