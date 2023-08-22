/*TASK 1

NUMBER GUESSING GAME

Create a program that generates a random number and asks the user to guess it.
Provide feedback on whether the guess is too high or too low until the user guesses the correct number.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int randomNumber, guess, chances = 0, max_ch = 5;
    srand(time(0));

    randomNumber = rand() % 100 + 1;
    cout << "\n:: WELCOME TO NUMBER GUESSING GAME ::" << endl;
    cout << "\n===== INSTRUCTIONS =====" << endl;
    cout << "Computer has generated a random number. \nYou have 5 chances to guess the number.\n"
         << endl;

    while (chances < max_ch)
    {
        cout << "Enter your guess between 1 and 100: " << endl;
        cin >> guess;
        if (guess != randomNumber)
        {
            if (guess < randomNumber)
            {
                cout << "Enter a larger number." << endl;
            }
            else if (guess > randomNumber)
            {
                cout << "Enter a smaller number." << endl;
            }
            chances++;
        }

        else
        {
            cout << "Congratulations!!! You got the right guess." << endl;
            break;
        }
    }
    if (chances == max_ch)
    {
        cout << "\nSorry, you couldn't guess the number. \nThe correct number was: " << randomNumber << endl;
    }
    return 0;
}