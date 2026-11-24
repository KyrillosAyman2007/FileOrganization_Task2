#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string fruit;
    ifstream inputFile("fruit.txt");

    if (!inputFile.is_open())
    {
        cout << "File not found!" << endl;
        return 1;
    }

    cout << "Fruits in the file:" << endl;

    while (getline(inputFile, fruit))
    {
        cout << fruit << endl;
    }

    inputFile.close();

    ofstream outputFile("fruit.txt", ios::app);

    outputFile << "Fresh Fruits" << endl;

    outputFile.close();

    cout << "\nFresh Fruits added successfully!" << endl;

    return 0;
}