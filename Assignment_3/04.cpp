#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int a[] = {1, 2, 4, 5};

    cout<<lower_bound(a, a + 4, 3)-a;

    return 0;
}