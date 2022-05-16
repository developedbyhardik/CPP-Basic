#include <iostream>
using namespace std;

float sum(float num1, float num2);

void greeting(string name="Hello World",int age=0);

int main()
{
    cout << "Sum Output: " << sum(2, 3) << endl;
    cout << "Sum Output: " << sum(2.2, 13) << endl;
    cout << "Sum Output: " << sum(20, 3.3) << endl;

    greeting();
    greeting("Hardik Prajapati",21);
}

float sum(float num1, float num2)
{
    return num1 + num2;
}

void greeting(string name,int age){
    cout<<"My name is "<<name<<endl;
    cout<<"I am "<<age<<" years old"<<endl;
}
