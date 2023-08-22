/*TASK 4

WORD COUNT

Develop a program that counts the number of words in a given text file.
Prompt the user to enter the file name and display the total word count.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string fileName;
    cout << "\nEnter the name of the text file: ";
    cin >> fileName;

    ifstream inputFile(fileName);

    if (!inputFile)
    {
        cout << "\nError opening file." << endl;
        return 1;
    }

    string word;
    int wordCount = 0;

    while (inputFile >> word)
    {
        wordCount++;
    }

    cout << "\nTotal number of words in the file: " << wordCount << endl;

    return 0;
}