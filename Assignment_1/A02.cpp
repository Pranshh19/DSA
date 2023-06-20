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

    int val;
    cin >> val;

    sort(a, a + n);

    int k = 0;
    for (int i = 0; i < n;i++){
        if(a[i]==val){
            a[i] = -1;
        }
        else{
            k++;
        }
    }

    cout << "Disting Elements: " << k << endl;

    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
        return 0;
}