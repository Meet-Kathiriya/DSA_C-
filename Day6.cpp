#include <iostream>
using namespace std;

int main() {
    
// QUS-1 ------------------------------------------   
    
    int a = 1;

    while (a <= 10) {
        cout << a << " "; 
        a++; 
    }

// QUS-2 ------------------------------------------   

int i = 10; 

    while (i >= 1) {
        cout << i << " "; 
        i--;
    }

// QUS-3 ------------------------------------------   

 int N;

    cout << "Enter any number: ";
    cin >> N;

    int i = 1;

    while (i <= N) {
        cout << i << " "; 
        i++; 
    }

// QUS-4 ------------------------------------------   

    int N;

    cout << "Enter any number: ";
    cin >> N;

    while (N >= 1) {
        if (N % 2 != 0) {  
            cout << N << " "; 
        }
        N--; 
    

// QUS-5------------------------------------------   

    int i,n;
    cout<<"Enter First Year:-";
    cin>>i;
    cout<<"Enter second Year:-";
    cin>>n;

    while (i<=n)
    {
        if(i%4==0)
            cout<<i<<"\t";
        i++;

    };


}
