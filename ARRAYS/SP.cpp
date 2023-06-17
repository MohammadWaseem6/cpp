#include<iostream>
using namespace std;

int main() {
    int a[3][3] = {
        {1, 0, 0},
        {2, 0, 0},
        {4, 0, 0}
    };
    int r = 3; // Number of rows
    int c = 3; // Number of columns
    int z = 0; // Count of zero elements

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == 0) {
                z++;
            }
        }
    }

    cout << "This matrix is:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    if (z > (r * c) / 2) {
        cout << "The matrix is a sparse matrix." << endl;
    } else {
        cout << "The matrix is not a sparse matrix." << endl;
    }
  int b[3][3] = {
        {1, 0, 0},
        {2, 2, 10},
        {4, 1, 0}
    };
    int r = 3; // Number of rows
    int c = 3; // Number of columns
    int z = 0; // Count of zero elements

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == 0) {
                z++;
            }
        }
    }

    cout << "This matrix is:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    if (z > (r * c) / 2) {
        cout << "The matrix is a sparse matrix." << endl;
    } else {
        cout << "The matrix is not a sparse matrix." << endl;
    }
    
    return 0;
}
