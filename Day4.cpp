#include <iostream>
using namespace std;

int main() 

{
// QUS-1

    int num1, num2, num3;

    cout << "Enter a value of the first number: ";
    cin >> num1;

    cout << "Enter a value of the second number: ";
    cin >> num2;

    cout << "Enter a value of the third number: ";
    cin >> num3;

    int min_value = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    cout << "The minimum value is: " << min_value << endl;


// QUS-2

// langaugaes

    int languageChoice, rechargeChoice;

    cout << "Press 1 for English" << endl;
    cout << "Press 2 for Hindi" << endl;
    cout << "Press 3 for Gujarati" << endl;
    cout << "Enter your choice: ";
    cin >> languageChoice;

// recharges

    switch(languageChoice) {
        case 1: // English
            cout << "Press 1 for Internet Recharge" << endl;
            cout << "Press 2 for Top-up Recharge" << endl;
            cout << "Press 3 for Special Recharge" << endl;
            cout << "Enter your choice: ";
            cin >> rechargeChoice;
            
// recharges options
            switch(rechargeChoice) {
                case 1:
                    cout << "Successfully done a Internet Recharge." << endl;
                    break;
                case 2:
                    cout << "Successfully done a Top-up Recharge." << endl;
                    break;
                case 3:
                    cout << "Successfully done a Special Recharge." << endl;
                    break;
                default:
                    cout << "Invalid recharge." << endl;
            }
            break;

// for hindi

        case 2: 
            cout << "Press 1 for Internet Recharge" << endl;
            cout << "Press 2 for Top-up Recharge" << endl;
            cout << "Press 3 for Special Recharge" << endl;
            cout << "Enter your choice: ";
            cin >> rechargeChoice;

            switch(rechargeChoice) {
                case 1:
                    cout << "Aapne safalta purvak Internet Recharge kiya hai." << endl; // "You have successfully done an Internet Recharge."
                    break;
                case 2:
                    cout << "Aapne safalta purvak Top-up Recharge kiya hai." << endl; // "You have successfully done a Top-up Recharge."
                    break;
                case 3:
                    cout << "Aapne safalta purvak Special Recharge kiya hai." << endl; // "You have successfully done a Special Recharge."
                    break;
                default:
                    cout << "Galat Recharge." << endl; // "Invalid recharge option."
            }
            break;

// for gujarati

        case 3: 
            cout << "Press 1 for Internet Recharge" << endl;
            cout << "Press 2 for Top-up Recharge" << endl;
            cout << "Press 3 for Special Recharge" << endl;
            cout << "Enter your choice: ";
            cin >> rechargeChoice;

            switch(rechargeChoice) {
                case 1:
                    cout << "Tame safalta thi Internet Recharge  karyu 6e." << endl; 
                    break;
                case 2:
                    cout << "Tame safalta thi Top-up Recharge  karyu 6e." << endl; 
                    break;
                case 3:
                    cout << "Tame safalta thi Special Recharge karyu 6e" << endl;
                    break;
                default:
                    cout << "Invalid recharge." << endl;
            }
            break;

        default:
            cout << "Invalid language option." << endl;
    }


}




