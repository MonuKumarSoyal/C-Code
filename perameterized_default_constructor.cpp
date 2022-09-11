#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
        complex(void);     // this is default constructor since it takes no arguments
        complex(int, int); // this is perameterized constructor since it is taking 2 arguments
        void printdata(){
            cout<<"The value of a is: "<<a<<endl<<"The value of b is: "<<b<<endl;
        }
};

complex :: complex(){
    a = 10;
    b = 10;
}

complex:: complex(int x, int y){
    a = x;
    b = y;
}
int main(){
    complex c1(4, 5);
    c1.printdata();
    complex c2;
    c2.printdata();
    return 0;
}