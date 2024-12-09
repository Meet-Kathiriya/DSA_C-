#include <iostream>
using namespace std;

int main() 

{

// QUS-1 -------------------------------------------------------  

    for (int i=0; i<5; i++) 
    {
        for (int j=41; <= 41 + i; j++) 
        {
            cout << j << " "; 
        }
        cout << endl;
    }


// QUS-2 -------------------------------------------------------      


    int num=11;  

    for (int i=1; i<= 4; i++) 
    {
        for (int j=1; j<=i; j++) 
        {
            cout << num << " ";  
            num++;  
        }
        cout << endl;
    }


// QUS-3 -------------------------------------------------------   


    for (int i=5; i>=1; i--) 
    {
        for (int j=1; j<=i; j++) 
        {
            if (j%2 != 0) 
            {
                cout << "1 ";
            } else 
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }



// QUS-4 -------------------------------------------------------      





// QUS-5 ------------------------------------------------------- 

    int n=5; 

    for (int i=1; i<=n; i++) 
    {
        
        for (int j=1; j<=i; j++) 
        {
            cout << j << " ";
        }
        
        for (int j=1; j<=2 * (n-i); j++) 
        {
            cout << " ";
        }
        
        for (int j=i; j>=1; j--) 
        {
            cout << j << " ";
        }
        
        cout << endl;
    }


// QUS-6 --------------------------------------------------------  
   

    int n=5;

    for (int i=1; i<=5; i++) 
    {
        if (i==1 || i==3) 
        {
            for (int j=1; j<=n; j++) 
            {
                cout << "*";
            }
        }
        else if (i==2) 
        {
            cout << "*";
            for (int j=1; j<=n - 2; j++) 
            {
                cout << " ";
            }
            cout << "*";
        }
        else {
            cout << "*";
        }

        cout << endl;
    }

}