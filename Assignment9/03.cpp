#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int nums[] = {3, 2, 1, 4};

    nums[-1] = INT_MIN;
    nums[4] = INT_MIN;

    int start = 0;
    int end = 3;
    int mid = (start + end) / 2;

    while(start<=end){

        if(nums[mid]>nums[mid-1] &&  nums[mid]>nums[mid+1]){
            cout << mid << endl;
            break;
        }
        else if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }

        mid = (start + end) / 2;
    }



    return 0;
}