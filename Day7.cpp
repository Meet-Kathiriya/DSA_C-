#include <iostream>
using namespace std;

int main() 
{
   
// QUS-1 -------------------------------------------------------  
   
    int n=5;

    for (int i=1; i<=n; i++) 
    {
        for (int j=i; j>=1; j--) 
        {
            cout <<j<<" ";
        }
        cout << endl;
    }

// QUS-2 -------------------------------------------------------      

    int n=5; 

    for (int i=1; i<=n; i++) 
    {
        for (int j=5 - (i-1); j<=5; j++) 
        {
            cout << j << " ";
        }
        cout << endl;
    }


// QUS-3 -------------------------------------------------------  

    int n=5;  

    for (int i=1; i<=n; i++) 
    {
        for (int j=1; j<=i; j++) 
        {
            cout << (n-i+1) << " ";  
        }
        cout << endl;
    }


// QUS-4 -------------------------------------------------------  

    // int n=5; 

    for (int i=1; i<=n; i++) 
    {
        for (int j=i; j<=n; j++) 
        {
            cout << j << " ";
        }
        cout << endl;
    }


// QUS-5 -------------------------------------------------------  

    int n=5; 

    for (int i=1; i<=n; i++) 
    {
        for (int j=1; j<= (n-i+1); j++) 
        {
            cout << i << " ";
        }
        cout << endl;
    }


}