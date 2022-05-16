#include <iostream>
using namespace std;

int main()
{
    cout << "While Loop\n";

    int counter = 1;

    while (counter <= 10)
    {
        cout << counter << endl;

        counter++;
    }

    cout << "Do While Loop\n";

    int doWhileCounter = 1;

    do    // It will always run once
    {
        cout << doWhileCounter << endl;

        doWhileCounter++;
    } while (doWhileCounter <= 10);
}