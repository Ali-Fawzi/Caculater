#include <iostream>
#include <cmath>
#include <conio.h>
#include <windows.h>
using namespace std;
int main() {
    double x, y;
    char op;
    int opt;
    system("Color 3"); // set colour to blue
    cout << "welcome to the caculator ^_^ " << endl;      //shows all this to the user
        cout << "===============================\n";
        do {
            cout << "> press 1 for normal caculator. \n";
            cout << "> press 2 for finding the square root. \n";
            cout << "> press 3 for powering up numbers. \n";
            cout << "> press 4 to EXIT.\n ";
            cin >> opt;           //get input from the user
        switch (opt) {            //switching options
        case 1:
            cout << "Enter a num1 :" << endl; 
            cin  >> x;            //geting input as num 1
            cout << "Enter OP : " << endl;
            cin >> op;            //geting operator for the operation
            cout << "Enter a num2 :" << endl;
            cin  >> y;            //geting input as num 2
            switch (op) {         //switching operations
            case '+':
                cout << x + y << endl;
                break;
            case '-':
                cout << x - y << endl;
                break;
            case '*':
                cout << x * y << endl;
                break;
            case '/':
                cout << x / y << endl;
                break;
            default:
                cout << "invalid op" << endl; //activated when inputing wrong operator
                break;
            }   break;
                case 2:
                cout << "enter number that you want it square root " << endl;
                cin  >> x;               //geting input for the square root
                cout << sqrt(x) << endl;
                break;
            case 3:
                cout << "enter number\n";
                cin >> x; //input as the number
                cout << "enter the power of number\n";
                cin >> y; //input as the power of it
                cout << pow(x, y) << endl; // showing the result
                break;
            case 4:
                cout << "Goodbye!";
                break;
            default :
                cout << "invalid selection. Try agin" << endl;
        }
        } while (opt != 4);

        return 0;

    

}
