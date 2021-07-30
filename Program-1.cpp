#include <iostream>
#include <math.h>
using namespace std;
class Calculator {
    double a, b;
public:
    void get() {
        cout << "Enter First Number: ";
        cin >> a;
        cout << "Enter Second Number: ";
        cin >> b;
    }
    double add() {
        return a + b;
    }
    double sub() {
        return a - b;
    }
    double mul() {
        return a * b;
    }
    double div() {
        if (b == 0) {
            cout << "Divison By Zero" << endl;
            return INFINITY;
        }
        else {
            return a / b;
        }
    }
};
int main() {
    char choice;
    Calculator cal;
    
    
        cout<<"Enter the operation";
        cin >> choice;
        switch (choice) {
        case '+':
            cal.get();
            cout << "Result: " << cal.add() << endl;
            break;
        case '-':
            cal.get();
            cout << "Result: " << cal.sub() << endl;
            break;
        case '*':
            cal.get();
            cout << "Result: " << cal.mul() << endl;
            break;
        case '/':
            cal.get();
            cout << "Result: " << cal.div() << endl;
            break;
        }

    return 0;
}
