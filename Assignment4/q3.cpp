#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int  main(){

    int a[3][3] = {{2, 4, -1}, {-10, 5, 11}, {18, -7, 6}};

    int row = 3;
    int col = 3;

    cout << "Before Transpose: \n";
        for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Transpose of matrix is: \n";

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

        return 0;
}