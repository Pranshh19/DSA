#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int nums[] = {1, 3, 5, 6};
    int target = 4;

    int start = 0;
    int end = 3;
    int mid = (start + end) / 2;
    int ans = -1;
    while(start<end){

        if(nums[mid]==target){
            ans = mid;
            break;
        }
        else if(nums[mid]>target){
            end = mid;
        }
        else{
            start = mid + 1;
        }

        mid = (start + end) / 2;
        
    }

    ans = mid;
    cout << "ans: "<<mid;
    return 0;
}