#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "?m?liyyatý daxil edin (+, -, *, /): ";
    cin >> op;

    cout << "Ýki ?d?d daxil edin: ";
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
                cout << "Sýfýra bölm? mümkün deyil!" << endl;
            break;
        default:
            cout << "Yanlýþ ?m?liyyat seçimi!" << endl;
    }

    return 0;
}
