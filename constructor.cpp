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
};

int main()
{
    Car myCar("Tata", "Red", 50000);
    cout << "My Car Name " << myCar.Name << endl;
    cout << "My Car Color " << myCar.Color << endl;
    cout << "My Car Price " << myCar.Price << "$" << endl;
}