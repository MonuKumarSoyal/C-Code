#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void SetData(void);
    int getdata1(void);
    int getdata2(void);
};

void Base ::SetData(void)
{
    data1 = 100;
    data2 = 200;
}

int Base ::getdata1(void)
{
    return (data1);
}

int Base ::getdata2(void)
{
    return (data2);
}

// when class which is getting derived is in public visibility mode then below is to demostrate the same

class Derived1 : public Base
{
    int data3;

public:
    void process(void)
    {
        data3 = data2 * getdata1();
    }

    void show()
    {
        cout << "The value of data1 is: " << getdata1() << endl
             << "The value of data2 is: " << data2 << endl
             << "The value of data3 is: " << data3 << endl;
    }
};

// if the visibility mode is private then the below is to demostrate the same

class Derived2 : private Base
{
    int data3;

public:
    void process(void)
    {
        SetData();
        data3 = data2 * getdata1();
    }

    void show()
    {
        cout << "The value of data1 is: " << getdata1() << endl
             << "The value of data2 is: " << data2 << endl
             << "The value of data3 is: " << data3 << endl;
    }
};

int main()
{
    Derived1 der;
    der.SetData();
    der.process();
    der.show();

    Derived2 derived;
    // derived.SetData();  // since Derived2's visibility mode is private so we can't access this function directly
    derived.process();
    derived.show();

    return 0;
}