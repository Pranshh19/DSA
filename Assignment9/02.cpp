#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int a[] = {5, 7, 8, 8, 8,8, 10};
    int target = 8;

    //LowerBound & UpperBound

    int start = 0;
    int end = 6;
    int mid = (start + end) / 2;
    int c = -1;
    //lower bound
    while(start<=end){
        if(a[mid]==target){
            c = mid;
            end = mid - 1;
        }
        else if(a[mid]<target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }


    //upper bound
    start = 0;
    end = 6;
    mid = (start+end)/2;
    int d = -1;
    while(start<=end){
        if(a[mid]==target){
            d = mid;
            start = mid + 1;
        }
        else if(a[mid]<target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    cout << "Start: " << c <<" "<< "End: " << d;

    return 0;
}