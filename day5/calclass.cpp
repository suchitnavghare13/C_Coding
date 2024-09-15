#include <iostream>
using namespace std;

class Calculator
{
private:
    float no1, no2;

public:
    void set_data(float n1,int n2)
    {
        no1=n1;
        no2=n2;
    }

    void add()
    {
    
        cout << "\n" << no1 << " + " << no2 << " = " << (no1 + no2);
    }

};

int main()
{
    Calculator cal;
    cout<<"Enter two number ";
    float n1,n2;
    cin>>n1>>n2;

    cal.set_data(n1,n2);
    cal.add();
    
    return 0;
}
