#include <iostream>
using namespace std;
main () {
    // QUS 1

    int a,b,c,total,avg;
   
    cout <<"First Value:-";
    cin >> a;
     cout <<"Second Value:-";
    cin >>b;
    if (a<b)
    {
        cout << "Max Value:-" << a << "\n";
    }
    else
    {
        cout << "Min Value:" << b << "\n";
    }
   
//    QUS 2

    cout <<"First Value:-";
    cin >> a;
    if (0>a)
    {
        cout << "Number is Negative \n";
    }
    else if (0<a)
    {
        cout << "Number is Positive \n";
    }
    else
    {
        cout << "Number is Neutral";
    }
    
    // QUS 3
      
    cout <<"Enter maths marks:";
    cin >> a;
    cout <<"Enter english marks:";
    cin >>b;
    cout <<"Enter science marks:";
    cin >>c;
    total= a+b+c;
    avg=total*100/300;
    cout << "Total Average mark:" << avg <<"\n"; 
    return 0;
}