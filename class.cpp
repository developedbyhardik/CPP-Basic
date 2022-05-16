#include <iostream>
using namespace std;

class Car
{
public:
    string Name;
    string Color;
    double Price;
};

int main()
{
    Car myCar;
    myCar.Color = "Red";
    myCar.Name = "Tata";
    myCar.Price = 500000;

    cout << "My Car Name " << myCar.Name << endl;
    cout << "My Car Color " << myCar.Color << endl;
    cout << "My Car Price " << myCar.Price << "$" << endl;
}