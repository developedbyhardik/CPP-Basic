#include <iostream>
using namespace std;

class Car
{
public:
    string Name;
    string Color;
    double Price;

    Car(string name, string color, double price)
    {
        Name = name;
        Color = color;
        Price = price;
    }
    void getInfo()
    {
        cout << "My Car Name " << Name << endl;
        cout << "My Car Color " << Color << endl;
        cout << "My Car Price " << Price << "$" << endl;
    }
};

int main()
{
    Car myCar("Tata", "Red", 50000);

    myCar.getInfo();
}