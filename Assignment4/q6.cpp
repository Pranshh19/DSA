#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int a[5] = {-4, -1, 0, 3, 10};

    for (int i = 0; i < 5; i++){
        a[i] = a[i] * a[i];
    }

    sort(a, a + 5);

    for (int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }

        return 0;
}