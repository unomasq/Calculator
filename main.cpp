
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    cout << "\t\t\t\t **********" << endl;
    cout << "\t\t\t\t|"
        << "Calculator"
        << "|" << endl;
    cout << "\t\t\t\t **********" << endl;
    int a;
    int b;
    char c;

    cout << "Enter the first number:" << endl;
    cin >> a;
    cout << "Enter the second number:" << endl;
    cin >> b;
    cout << "Enter an operation(+, -, *, /)" << endl;
    cin >> c;
    if ((a == 0 || b == 0) && c == '/') {
        cout << "You can't divide by zero!!!" << endl;
    }

    else {
        switch (c) {
        case '+':
            cout << " --------------------------------------------------------" << endl;
            cout << "|"
                << "The result of the sum of numbers " << a << " and " << b
                << " is the number " << a + b << "|" << endl;
            cout << " --------------------------------------------------------" << endl;
            break;
        case '-':
            cout << " ----------------------------------------------------------------" << endl;
            cout << "|"
                << "The result of the difference of numbers " << a << " and " << b
                << " is the number " << a - b << "|" << endl;
            cout << " ----------------------------------------------------------------" << endl;
            break;
        case '*':
            cout << " ------------------------------------------------------------" << endl;
            cout << "|"
                << "The result of the product of numbers " << a << " and " << b
                << " is the number " << a * b << "|" << endl;
            cout << " ------------------------------------------------------------" << endl;
            break;
        case '/':
            cout << " ---------------------------------------------------------" << endl;
            cout << "| "
                << "The result of private numbers " << a << " and " << b
                << " is the number " << (float)a / b << " | " << endl;
            cout << " ---------------------------------------------------------" << endl;
            break;
        default: {
            cout << " *****************************" << endl;
            cout << "!I don't know this command yet!" << endl;
            cout << " *****************************" << endl;
        }
        }
    }
}
