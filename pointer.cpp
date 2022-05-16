#include <iostream>
using namespace std;

void celebrateBirthday(int *age);

int main()
{
    int myAge = 21;

    cout << "My age " << myAge << endl;

    celebrateBirthday(&myAge);

    cout << "My age " << myAge << endl;
}

void celebrateBirthday(int *age)
{
    (*age)++;
    cout << "Yeee Celebrated " << *age << " Birthday" << endl;
}