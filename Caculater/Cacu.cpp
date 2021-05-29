#include <iostream>
#include <cmath>
#include <conio.h>
#include <windows.h>
using namespace std;
int main() {
    double x, y;
    char op;
    char opt;
    system("Color 3");
    cout << "welcome to the caculator ^_^ " << endl;
        cout << "===============================\n";
        cout << "> press 1 for normal caculator. \n";
        cout << "> press 2 for finding the square root. \n";
        cout << "> press 3 for powering up numbers. \n";
        cout << "> press any Button to EXIT.\n ";
        cin  >> opt;
        switch (opt) {
        case '1':
            cout << "Enter a num1 :" << endl;
            cin  >> x;
            cout << "Enter OP : " << endl;
            cin >> op;
            cout << "Enter a num2 :" << endl;
            cin  >> y;
            switch (op) {
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
                cout << "invalid op" << endl;
                break;
            }   break;
                case '2':
                cout << "enter number that you want it square root " << endl;
                cin  >> x;
                cout << sqrt(x) << endl;
                break;
            case '3':
                cout << "enter number\n";
                cin >> x;
                cout << "enter the power of number\n";
                cin >> y;
                cout << pow(x, y) << endl;
                break;
        }
        return 0;

    

}
