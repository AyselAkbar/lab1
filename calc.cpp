#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "?m?liyyat� daxil edin (+, -, *, /): ";
    cin >> op;

    cout << "�ki ?d?d daxil edin: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << "N?tic?: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "N?tic?: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "N?tic?: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "N?tic?: " << num1 / num2 << endl;
            else
                cout << "S�f�ra b�lm? m�mk�n deyil!" << endl;
            break;
        default:
            cout << "Yanl�� ?m?liyyat se�imi!" << endl;
    }

    return 0;
}
