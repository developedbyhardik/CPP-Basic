#include <iostream>
using namespace std;

class Car
{
private:
    string Name;
    string Color;
    double Price;
    bool Iscrashed;

public:
    Car(string name, string color, double price)
    {
        Name = name;
        Color = color;
        Price = price;
        Iscrashed = false;
    }
    void getInfo()
    {
        cout << "My Car Name " << Name << endl;
        cout << "My Car Color " << Color << endl;
        cout << "My Car Price " << Price << "$" << endl;
    }
    void crashed()
    {
        cout << Name << " car crashed" << endl;
        Iscrashed = true;
    }
    void repaired()
    {
        cout << Name << " car repaired" << endl;
        Iscrashed = false;
    }
    void moving()
    {
        if (Iscrashed)
        {
            cout << "You can not drive " << Name << " car it is crashed" << endl;
        }
        else
        {
            cout << "You can  drive " << Name << " car " << endl;
        }
    }
};

class FlyingCar : public Car
{
public:
    FlyingCar(string name, string color, double price) : Car(name, color, price) {}
};

int main()
{
    Car myCar("Tata", "Red", 50000);
    FlyingCar newCar("Harcy", "Blue", 50000);
    newCar.getInfo();
}