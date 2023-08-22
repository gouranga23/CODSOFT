/*TASK 2

SIMPLE CALCULATOR

Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division.
Allow the user to input two numbers and choose an operation to perform.*/

#include <iostream>
using namespace std;

int main()
{
    int choice;
    long num1, num2, result;

    cout << "\nPlease choose your option:"
            "\n1 = Addition"
            "\n2 = Subtraction"
            "\n3 = Multiplication"
            "\n4 = Division"
            "\n\nEnter your choice: ";
    cin >> choice;

    while (choice < 1 || choice > 4)
    {
        cout << "\nPlease choose the above mentioned option."
                "\nEnter your Choice: ";
        cin >> choice;
    }

    switch (choice)
    {
    case 1:
        cout << "\nEnter two numbers: \n";
        cin >> num1 >> num2;
        result = num1 + num2;
        cout << "Sum = " << result;
        break;

    case 2:
        cout << "Enter two numbers: \n";
        cin >> num1 >> num2;
        result = num1 - num2;
        cout << "Subtraction = " << result;
        break;

    case 3:
        cout << "Enter two numbers: \n";
        cin >> num1 >> num2;
        result = num1 * num2;
        cout << "Product = " << result;
        break;

    case 4:
        cout << "\nEnter Dividend: ";
        cin >> num1;
        cout << "Enter Divisor: ";
        cin >> num2;

        while (num2 == 0)
        {
            cout << "\nDivisor cannot be zero."
                    "\nEnter divisor once again: ";
            cin >> num2;
        }
        result = num1 / num2;
        cout << "\nQuotient = " << result;
        break;

    default:
        cout << "Error: Invalid operation." << endl;
        return 1;
    }
}