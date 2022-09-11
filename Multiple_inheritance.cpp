#include<iostream>
using namespace std;

/*
class DerivedC: visibility-mode base1, visibility-mode base2
{
     Class body of class "DerivedC"
};
*/

class Base1
{
    protected:
        int base1int;
    public:
        void set_base1(int a){
            base1int = a;
        }
};

class Base2
{
    protected:
        int base2int;
    public:
        void set_base2(int b){
            base2int = b;
        }
};

class Base3
{
    protected:
        int base3int;
    public:
        void set_base3(int c){
            base3int = c;
        }
};

class Derived : public Base1, public Base2, public Base3
{
    public:
        void display(void){
            cout<< "The value of Base1 is: "<<base1int<<endl;
            cout<< "The value of Base2 is: "<<base2int<<endl;
            cout<< "The value of Base3 is: "<<base3int<<endl;
            cout<< "The summation of these is: "<<base1int + base2int + base3int<<endl;
        }
};

int main(){
    Derived d;
    d.set_base1(10);
    d.set_base2(20);
    d.set_base3(30);
    d.display();
    return 0;
}