#include <iostream>
using namespace std;

class Car
{
private:
    string Color;
    double Price;

protected:
    string Name;
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
    void moving()
    {
        if (Iscrashed)
        {
            cout << "You can not fly " << Name << " car it is crashed" << endl;
        }
        else
        {
            cout << "You can  fly " << Name << " car " << endl;
        }
    }
};

class UnderWaterCar : public Car
{
public:
    UnderWaterCar(string name, string color, double price) : Car(name, color, price) {}
    void moving()
    {
        if (Iscrashed)
        {
            cout << "You can not dive " << Name << " car it is crashed" << endl;
        }
        else
        {
            cout << "You can  dive " << Name << " car " << endl;
        }
    }
};

int main()
{
    Car myCar("Tata", "Red", 40000);

    FlyingCar newCar("Harcy", "Black", 50000);

    UnderWaterCar waterCar("Warcy", "Blue", 60000);

    myCar.moving();
    newCar.moving();
    waterCar.moving();

    Car *car1 = &newCar;
    Car *car2 = &waterCar;

    car1->crashed();
    car2->crashed();

    myCar.moving();
    newCar.moving();
    waterCar.moving();

    car1->repaired();
    car2->repaired();

    myCar.moving();
    newCar.moving();
    waterCar.moving();
}