#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    string s;
    cin >> s;
    int a[26] = {0};
    int flag = 0;
    for (int i = 0; i < s.length();i++){
        a[s[i] - 'a']++;
    }

        for (int i = 0; i < s.length(); i++)
        {
         char b = s[i];
         if(a[b-'a']==1){
             cout << i;
             flag = 1;
             break;
         }
           
        }

    if(flag==0)
        cout << -1;

    return 0;
}