#include <iostream>
#include <cmath>

void greeting() {
    std::cout << "welcome to the caculator ^_^ " << std::endl;//shows all this to the display.
    std::cout << "===============================\n";
}
void selections() {
    std::cout << "> press 1 for normal caculator. \n";//show all this to the dispaly.
    std::cout << "> press 2 for finding the square root. \n";
    std::cout << "> press 3 for powering up numbers. \n";
    std::cout << "> press 4 to EXIT.\n ";
}
void LOOP() {
    double x, y;
    char op;
    int opt;
    do {
        selections();
        std::cin >> opt;//get input from the user
        switch (opt) {//switching options
        case 1:
            std::cout << "Enter a num1 :" << std::endl;
            std::cin >> x;//geting input as num 1
            std::cout << "Enter OP : " << std::endl;
            std::cin >> op;//geting operator for the operation.
            std::cout << "Enter a num2 :" << std::endl;
            std::cin >> y;//geting input as num 2.
            switch (op) {//switching operations.
            case '+':
                std::cout << x + y << std::endl;
                break;
            case '-':
                std::cout << x - y << std::endl;
                break;
            case '*':
                std::cout << x * y << std::endl;
                break;
            case '/':
                std::cout << x / y << std::endl;
                break;
            default:
                std::cout << "invalid op\a" << std::endl;//activated when inputing wrong operator.
                break;
            }   break;
        case 2:
            std::cout << "enter number that you want it square root " << std::endl;
            std::cin >> x;//geting input for the square root.
            std::cout << sqrt(x) << std::endl;
            break;
        case 3:
            std::cout << "enter number\n";
            std::cin >> x;//input as the number.
            std::cout << "enter the power of number\n";
            std::cin >> y;//input as the power of it.
            std::cout << pow(x, y) << std::endl;// showing the result. //pow is a function for x^y.
            break;
        case 4:
            std::cout << "Goodbye!\a";// \a is for alarm.
            break;
        default:
            std::cout << "invalid selection. Try agin\a" << std::endl;// \a is for alarm.
        }
    } while (opt != 4);//when enter 4 the loop breaks.
}
int main() {
    system("Color 3");// set colour to blue.
    greeting();
    LOOP();
    return 0;
}
