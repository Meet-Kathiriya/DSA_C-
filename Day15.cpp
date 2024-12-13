#include <iostream>
using namespace std;

int main() 
{

// QUS-1 -------------------------------------------------------  

    int rows, cols;
    
    cout << "Enter number of rows:- ";
    cin >> rows;
    cout << "Enter number of columns:- ";
    cin >> cols;

    int matrix[rows][cols];
    int sum=0;

    cout << "Enter elements of the matrix: \n";
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
            sum+=matrix[i][j]; 
        }
    }

    cout << "The sum of all elements in the matrix is:- " << sum << endl;

// QUS-2 -------------------------------------------------------  


    int a[] = {10,20,30,40,50,60,70};
    int size = sizeof(a) / sizeof(a[0]);
    
    int sum = 0;

    for (int i=0; i<size; i++) 
    {
        if (i%2==0) 
        {  
            sum+=a[i];
        }
    }

    cout << "Sum of elements at even indices:- " << sum << endl;


// QUS-3 -------------------------------------------------------  

    int matrix[3][4] = 
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int rows=3, cols=4;
    int sum=0;

    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            if (i%2 !=0 || j%2 !=0) 
            {  
                sum+=matrix[i][j];
            }
        }
    }

    cout << "Sum of elements at odd row or column indices:- " << sum << endl;


// QUS-4 -------------------------------------------------------  

    int matrix[3][4] = 
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int rows=3, cols=4;
    int sum=0;

    for (int i=0; i<rows; i++) 
    {
        sum+=matrix[i][0];  
    }

    cout << "Sum of leftmost elements (first column): " << sum << endl;


// QUS-5 -------------------------------------------------------  

    int matrix[3][4]= 
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int rows=3, cols=4;
    int sum=0;

    for (int i = 0; i < rows; i++) 
    {
        sum+=matrix[i][cols - 1]; 
    }

    cout << "Sum of rightmost elements (last column): " << sum << endl;


// QUS-6 -------------------------------------------------------  

    int matrix[3][3]= 
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int n=3; 
    int primaryDiagonalSum=0;
    int secondaryDiagonalSum=0;

    for (int i=0; i<n; i++) 
    {
        primaryDiagonalSum+=matrix[i][i];  
        secondaryDiagonalSum+=matrix[i][n-1-i];  
    }

    int totalSum=primaryDiagonalSum+secondaryDiagonalSum;
    if (n%2!=0) 
    {
        totalSum-=matrix[n/2][n/2];  
    }

    cout << "Sum of both diagonals:- " << totalSum << endl;



}
