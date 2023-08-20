#include <iostream>
using namespace std;

int main(){
    double num1, num2;
    char operations;

    cout << "Enter your first number: ";
    cin >> num1;

    cout << "Enter your operation(+,-,*,/): ";
    cin >> operations;
    

    cout << "Enter your second number: ";
    cin >> num2;

    double result;
    switch(operations){
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        if (num2 != 0){
            result = num1 / num2;
        } else {
            cout << "Error: division by zero" << endl;
        }
        return 1;
        break;
    default: 
    cout << "Error: not a valid operation" << endl;
    return 1;
    }

    cout << "Answer: " << result << endl;


}