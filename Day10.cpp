#include <iostream>
using namespace std;

int main() 
{


// QUS-1 -------------------------------------------------------  


    for (int i=1; i<=5; i++) 
    {
        for (int j=i; j>=1; j--) 
        {
            cout << j << " ";
        }
        cout << endl;
    }


// QUS-2 -------------------------------------------------------  


     for (int i=5; i>=1; i--) 
     {
        for (int j=i; j<=5; j++) 
        {
            cout << j << " ";
        }
        cout << endl;
    }


// QUS-3 -------------------------------------------------------  


    for (int i=5; i>=1; i--) 
    {
        for (int j=1; j<=i; j++) 
        {
            cout << i << " ";
        }
        cout << endl;
    }


// QUS-4 -------------------------------------------------------  


    for (int i=1; i<=5; i++) 
    {
        for (int j=i; j<=5; j++) 
        {
            cout << j << " ";
        }
        cout << endl;
    }


// QUS-5 -------------------------------------------------------  


    for (int i=1; i<=5; i++) 
    {
        for (int j=1; j<=6 - i; j++) 
        {
            cout << i << " ";
        }
        cout << endl;
    }


// QUS-6 ------------------------------------------------------- 


     for (int i=5; i>=1; i--) 
     {
        for (int j=1; j<=i; j++) 
        {
            if (j%2 != 0) 
            {
                cout << "1 ";

            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }


// QUS-7 -------------------------------------------------------  


    for (int i=1; i<=5; i++) 
    {
        for (char j='A' + i-1; j>='A'; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }


// QUS-8 -------------------------------------------------------  


 int num = 1; 
    for (int i=1; i<=5; i++) 
    {
        for (int j=1; j<=i; j++) 
        {
            cout << num << " ";  
            num++;  
        }
        cout << endl;
    }



}