#include <iostream>
#include <climits>
using namespace std;

int main() 

{

// QUS-1 -------------------------------------------------------  

    int n;

    cout << "Enter the number of elements:- ";
    cin >> n;

    int a[n];

    cout << "Enter " << n << " elements:" << endl;
    for(int i=0; i<n; i++) 
    {
        cin >> a[i];
    }

    cout << "The array elements are:" << endl;
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;


// QUS-2 -------------------------------------------------------  


    int n;

    cout << "Enter the number of elements:- ";
    cin >> n;

    int a[n];
    int sum = 0;

    cout << "Enter " << n << " elements:" << endl;
    for(int i=0; i<n; i++) 
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++) 
    {
        sum+=a[i]; 
    }

    cout << "The sum of all elements in the array is: " << sum << endl;



// QUS-3 -------------------------------------------------------  


     int n;

    cout << "Enter number of elements in the array:- ";
    cin >> n;

    int a[n];

    cout << "Enter elements of the array:- ";
    for (int i=0; i<n; i++) 
    {
        cin >> a[i];
    }

    int sum=0;

    for (int i=0; i<n; i+=2) 
    {
        sum+=a[i];
    }

    cout << "Sum of elements at even indexes: " << sum << endl;



// QUS-4 -------------------------------------------------------  

    int n;

    cout << "Enter number of elements in the array: ";
    cin >> n;

    int a[n]; 


    cout << "Enter elements of the array: ";
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    int max_val = INT_MIN;
    int min_val = INT_MAX;

    for (int i=0; i<n; i++) 
    {
        if (a[i] > max_val) 
        {
            max_val = a[i];
        }
        if (a[i] < min_val) 
        {
            min_val = a[i];
        }
    }

    cout << "The maximum value is:- " << max_val << endl;
    cout << "The minimum value is:- " << min_val << endl;



}
