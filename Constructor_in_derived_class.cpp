#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"First Base class's constructor called"<<endl;
        }
        void printdata1(void){
            cout<<"The value of data1 is: "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Second Base class's constructor called"<<endl;
        }
        void printdata2(void){
            cout<<"The value of data2 is: "<<data2<<endl;
        }
};

class Derived : public Base1, public Base2{
    int data3, data4;
    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
            data3 = c;
            data4 = d;
            cout<<"Derived class's constructor called"<<endl;
        }
        void printderived(void){
            cout<<"The value of data3 is: "<<data3<<endl;
            cout<<"The value of data4 is: "<<data4<<endl;
        }

};

int main(){
    Derived d(1, 2, 3, 4);
    d.printdata1();
    d.printdata2();
    d.printderived();    
    return 0;
}