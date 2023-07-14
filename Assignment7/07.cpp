#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    string s, t;
    cin >> s;
    cin >> t;

    stack<char> s1;
    stack<char> s2;

    for (int i = 0; i < s.length();i++){
      if(s[i]!='#'){
          s1.push(s[i]);
      }
      else{
          s1.pop();
      }
    }

    
    for (int i = 0; i < s.length();i++){
      if(t[i]!='#'){
          s2.push(s[i]);
      }
      else{
          s2.pop();
      }
    }

    

        return 0;
}