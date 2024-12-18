#include <iostream>
using namespace std;

int main() 
{

// QUS-1 -------------------------------------------------------  

    int size;

    cout << "Enter array size:- ";
    cin >> size;

    int a[size];  

    cout << "Enter array elements:-" << endl;
    for (int i = 0; i < size; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Negative elements from the Array:- ";
    bool foundNegative=false;  
    for (int i=0; i<size; i++) 
    {
        if (a[i]<0) 
        {
            if (foundNegative) 
            {
                cout << ", ";  
            }
            cout << a[i];
            foundNegative = true;
        }
    }

    if (!foundNegative) 
    {
        cout <<"None";
    }

    cout << endl;


// QUS-2 -------------------------------------------------------  


    int rows,cols;

    cout << "Enter array's row size:- ";
    cin >> rows;
    cout << "Enter array's column size:- ";
    cin >> cols;

    int a[rows][cols];  

    cout << "Enter array elements:-" << endl;
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            cout << "a[" <<i<< "][" <<j<< "] = ";
            cin >>a[i][j];
        }
    }

    int largest=a[0][0];

    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            if (a[i][j]>largest) 
            {
                largest=a[i][j];
            }
        }
    }

    // cout << "The large element is:- " <<largest<< endl;


// QUS-3 -------------------------------------------------------  


    int rows, cols;

    cout << "Enter array row & column size:- ";
    cin >> rows >> cols;

    int a[rows][cols];

    cout << "Enter array elements:-" << endl;
    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    int transpose[cols][rows];

    for (int i=0; i<rows; i++) 
    {
        for (int j=0; j<cols; j++) 
        {
            transpose[j][i]=a[i][j];  
        }
    }

    cout << "The transpose matrix of array:-" << endl;
    for (int i=0; i<cols; i++) 
    {
        for (int j=0; j<rows; j++) 
        {
            cout <<transpose[i][j] << " ";
        }
        cout << endl;
    }


// QUS-4 -------------------------------------------------------  


    int rows, cols;

    cout << "Enter array row size:- ";
    cin >> rows;
    cout << "Enter array column size:-";
    cin >> cols;

    int a[rows][cols]; 

    cout << "Enter array elements:-" << endl;
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++) 
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    int rowNum;
    cout << "Enter row number:- ";
    cin >> rowNum;

    cout << "Elements of row " << rowNum << ": ";
    int rowSum=0;
    for (int j=0; j<cols; j++)
    {
        cout <<a[rowNum][j]<< " ";
        rowSum+=a[rowNum][j];
    }
    cout << endl;
    cout << "The sum of row " << rowNum << ": " << rowSum << endl;

    int colNum;
    cout <<"Enter column number: ";
    cin >>colNum;

    cout <<"Elements of column " << colNum << ": ";
    int colSum=0;
    for (int i=0; i<rows; i++) 
    {
        cout <<a[i][colNum] << " ";
        colSum+=a[i][colNum];
    }
    cout << endl;
    cout <<"The sum of column " <<colNum << ": " <<colSum << endl;

}
