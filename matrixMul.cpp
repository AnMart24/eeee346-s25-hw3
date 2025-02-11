#include <iostream>

using namespace std;

void printMatrixMul(int** mat1, int r1, int c1, int** mat2, int r2, int c2) {
    // TODO: create a 2D dynamic array for the resulting matrix
    
        int** nMat = new int*[r1];
        for (int i = 0; i < r1; ++i) {
        nMat[i] = new int[c2];
        }

    
    // TODO: compute and store the resulting element values in the resulting matrix
        
         for (int j = 0; j < r1; ++j) {
        for (int k = 0; k < c2; ++k) {
            for (int l = 0; l < c1; ++l) {
                nMat[j][k] += mat1[j][l] * mat2[l][k];
        }}}
        
    // TODO: display the element values of the resulting matrix using cout
    cout << endl << "My resulting matrix is: " << endl;
    
    for (int m = 0; m < r1; ++m) {
        for (int n = 0; n < c2; ++n) {
            cout << nMat[m][n] << " ";
        }
        cout << endl; // Move to the next row after printing all columns
    }
    
    for (int p = 0; p < r1; ++p) {
    delete[] nMat[p]; // Delete each row
  }
  delete[] nMat; // 

    // TODO: deallocate the dynamic memory from the 2D array
}
