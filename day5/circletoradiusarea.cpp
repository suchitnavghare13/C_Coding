#include <iostream>
using namespace std;

class Circle
{
private:
    float r; // instance member(object's)

public:
    void area()
    {
        cout << "Radius is " << r;
        cout << "\nArea of circle is " << (float)3.14 * r * r;
    }

    void set_data(float a)
    {
        r = a;
    }
};

int main()
{
    Circle c;

    float r;
    cout << "Enter the radius : ";
    cin >> r;

    c.set_data(r);
    c.area();

    return 0;
}