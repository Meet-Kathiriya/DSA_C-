#include <iostream>
using namespace std;

int main() 
{

// QUS-1 -------------------------------------------------------  

    int row, col;
    
    cout << "Enter array's row & column size:- ";
    cin >> row >> col;

    int a[row][col];
    
    cout << "Enter array's elements:-" << endl;
    for (int i=0; i<row; i++) 
    {
        for (int j=0; j<col; j++)    
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    int diagonalSum = 0;
    for (int i=0; i<row; i++) 
    {
        diagonalSum+=a[i][i];
    }

    cout << "The sum of diagonal elements of an Array:- " << diagonalSum << endl;


// QUS-2 -------------------------------------------------------  

    const int n=5; 
    int a[n][n];   
    cout << "Enter array's elements:- \n";

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) 
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    int sum=0; 
    cout << "Boundary elements are:\n";

    for (int j=0; j<n; ++j) 
    {
        cout << a[0][j] << " ";
        sum+=a[0][j];
    }
    cout << endl;

    for (int i=1; i<n - 1; ++i) 
    {
        cout << a[i][0] << " ";
        sum += a[i][0];
        for (int j=1; j<n - 1; ++j) 
        {
            cout << "  "; 
        }
        cout << a[i][n-1] << endl;
        sum += a[i][n-1];
    }

    for (int j=0; j<n; ++j) 
    {
        cout << a[n-1][j] << " ";
        sum += a[n-1][j];
    }
    cout << endl;

    cout << "The sum of boundary elements of the Array:- " << sum << endl;


// QUS-3 -------------------------------------------------------  


    int rows, cols;

    cout << "Enter array's row size:- ";
    cin >> rows;
    cout << "Enter array's column size:- ";
    cin >> cols;

    int A[rows][cols], B[rows][cols], C[rows][cols];

    cout << "Enter array *A* elements:- \n";
    for (int i=0; i<rows; ++i) 
    {
        for (int j=0; j<cols; ++j) 
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }

    cout << "Enter array *B* elements:- \n";
    for (int i=0; i<rows; ++i) 
    {
        for (int j=0; j<cols; ++j) 
        {
            cout << "b[" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
    }

    for (int i=0; i<rows; ++i) 
    {
        for (int j=0; j<cols; ++j) 
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    
    cout << "Array C is:\n";
    for (int i=0; i<rows; ++i) 
    {
        for (int j=0; j<cols; ++j)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }


}
     