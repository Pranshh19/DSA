#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    vector<int> nums1;
    vector<int> nums2;
    int m; 
    int n;
    cin >> m >> n;

    for (int i = 0; i < m + n; i++){
        cin >> nums1[i];
    }
    
    for (int i = 0; i < n; i++){
        cin >> nums2[i];
    }
        int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] >= nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        }
         // If we left with j>=0 than we have to insert rest elements in nums1 .
        // If we left with i>=0 than we no need to iterate through i an we know 
       //nums1 is sorted so rest elements are sorted in their own.
         while(j >= 0){
            nums1[k] = nums2[j];j--;k--;
        }
  
    return 0;
}