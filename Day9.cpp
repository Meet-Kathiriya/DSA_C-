#include <iostream>
using namespace std;

int main()
{
    
// QUS-1 -------------------------------------------------------      
    
    int n=5;  

    for (int i=0; i<n; i++) 
    {
        for (int j=n; j>i; j--) 
        {
            cout << j << " ";
        }
        cout << endl;
    }


// QUS-2 -------------------------------------------------------  

    int n = 5; 

    for (int i=0; i<n; i++) 
    {
        for (int j=1; j<=n - i; j++) {
            cout << j << " ";
        }

        for (int j=1; j<2 * i; j++) {
            cout << "  "; 
        }

        for (int j=n - i; j>0; j--) {
            cout << j << " ";
        }

        cout << endl;
    }


// QUS-3 -------------------------------------------------------  


    for (int i=5; i>=1; i--) {
        for (int j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    for (int i=2; i<=5; i++) {
        for (int j=1; j<=i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

}



