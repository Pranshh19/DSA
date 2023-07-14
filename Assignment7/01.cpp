#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    string s = "egg";
    string e = "add";
    int flag = 0;
    if (s.length() > e.length() || s.length() < e.length()){
        flag = 1;
    }

    map<char, char> mp;
    map<char, char> mt;
    for (int i = 0; i < s.length();i++){
        if(mp.find(s[i])==mp.end() && mt.find(e[i])==mt.end()){
            mp[s[i]] = e[i];
            mt[e[i]] = 1;
        }
    }

    for (int i = 0; i<s.length(); i++){
        cout << mp[s[i]] << " " << e[i] << " "
                               << "\n";
        if(mp[s[i]]!=e[i]){
            flag = 1;
        }
    }

    if(flag==0)
        cout << "YES";
    else{
        cout << "NOT";
    }

        return 0;
}