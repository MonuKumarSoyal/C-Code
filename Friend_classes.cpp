#include <iostream>
using namespace std;

class complex;

class calculator
{
    public:
        int add(int m, int n){
            return (m + n);
        }

        void SumRealcomplex(complex, complex);
        void SumImagcomplex(complex, complex);
};


class complex
{
    int a, b;
    // friend void calculator :: SumRealcomplex(complex, complex);
    // friend void calculator :: SumImagcomplex(complex, complex);

    // making a class as friend class 
    friend class calculator;

public:
    void SetData(int x, int y)
    {
        a = x;
        b = y;
    }

    void PrintData(void)
    {
        cout << "The complex number is " << a << " + " << b << "i"<< endl;
    }
};


void calculator :: SumRealcomplex(complex o1, complex o2){
    int sum = o1.a + o2.a;
    cout<<"The sum of the Real part is : "<<sum<<endl;
}

void calculator :: SumImagcomplex(complex o1, complex o2){
    int sum = o1.b + o2.b;
    cout<<"The sum of the Imaginary part is :"<<sum<<endl;
}

int main()
{
    complex obj1, obj2;
    obj1.SetData(1, 4);
    obj1.PrintData();

    obj2.SetData(2, 6);
    obj2.PrintData();

    calculator cal;
    cal.SumRealcomplex(obj1, obj2);
    cal.SumImagcomplex(obj1, obj2);
    return 0;
}