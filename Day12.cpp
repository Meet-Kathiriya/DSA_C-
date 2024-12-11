#include <iostream>
using namespace std;

int main() 
{

// QUS-1 -------------------------------------------------------  

    int size;

    cout << "Enter array size:- ";
    cin >> size;

    int arr[size];  

    cout << "Enter array elements: \n";
    for (int i=0; i<size; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "Length of an Array: " << size << endl;


// QUS-2 -------------------------------------------------------  


    int size;

    cout << "Enter array size:- ";
    cin >> size;

    int arr[size];  

    cout << "Enter array elements: \n";
    for (int i=0; i<size; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    double sum=0;
    for (int i=0; i<size; i++) 
    {
        sum += arr[i];
    } 

    double average=sum/size;

    cout << "Average of an Array: " << average << endl;


// QUS-3 -------------------------------------------------------  


    int size;

    cout << "Enter array size:- ";
    cin >> size;

    int A[size], B[size], C[size]; 

    cout << "Enter array A's elements: \n";
    for (int i=0; i<size; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> A[i];
    }

    cout << "Enter array B's elements:\n";
    for (int i=0; i<size; i++) 
    {
        cout << "b[" << i << "] = ";
        cin >> B[i];
    }

    for (int i=0; i<size; i++) 
    {
        C[i] = A[i] + B[i];
    }

    cout << "Array C is:- ";
    for (int i=0; i<size; i++) 
    {
        cout << C[i];
        if (i!=size- 1) 
        {
            cout << ", "; 
        }
    }
    cout << endl;


}
