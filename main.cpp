#include <iostream>

using namespace std;

int main()
{
    double number_first = 0;
    double number_second = 0;
    char operation;
    int mode = 0;
    while (mode != 2) {
        cout << "Enter the mode:\n1:Calculator\n2:Exit\n";
        cin >> mode;
        switch (mode) {
            case 1:
                cout << "Enter 2 numbers:\n";
                cin >> number_first >> number_second;
                cout << "Enter the operation(+,-,*,/):\n";
                cin >> operation;
                switch (operation) {
                    case '+':
                        cout << "Result = " << number_first + number_second << endl;
                        break;
                    case '-':
                        cout << "Result = " << number_first - number_second << endl;
                        break;
                    case '*':
                        cout << "Result = " << number_first * number_second << endl;
                        break;
                    case '/':
                        if (number_second == 0) {
                            cout << "Сan't divide by zero\n";
                            break;
                        }
                        else {
                            cout << "Result = " << number_first / number_second << endl;
                        break;
                        }
                    default:
                        cout << "ERROR\n";
                }
            case 2: 
            break;
            default:
            cout << "ERROR\n";
        }
    }
    
    return 0;
}