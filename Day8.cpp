#include <iostream>
using namespace std;

int main() 
{

// QUS-1 -------------------------------------------------------  

    char ch ='a';  

    do {
        cout << ch << " ";  
        ch=ch+4; 
        } while (ch<='z');  


// QUS-2 -------------------------------------------------------  

    int number, count=0;

    cout << "Enter a number: ";
    cin >> number;

    if (number==0) 
    {
        count=1; 
    }

        {
        while (number != 0) 
            {
            number=number / 10; 
            count++; 
            }
        }
    cout << "Total number of digits: " << count << endl;


// QUS-3 -------------------------------------------------------  


cout << "---" << endl;
    cout << "Question-3" << endl;

     int number, first, last;

        cout << "Enter any number: ";
        cin >> number;

        if (number < 0) {
            number = -number;
        }

        last = number % 10;

        while (number >= 10) {
            number /= 10;
        }
        first = number;

        int sum = first + last;

        cout << "The sum of the first and the last digit: " << sum << endl;
    
    cout << "---" << endl;

}
