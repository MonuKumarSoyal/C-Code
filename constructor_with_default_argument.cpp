#include<iostream>
using namespace std;

class complex {
    int data1;
    int data2;
    int data3;
    public:
        complex(int a, int b = 5, int c = 10){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printdata(void);

};

void complex :: printdata(void){
    cout<<"The value of data1 is: "<<data1<<endl<<"The value of data2 is: "<<data2<<endl;
    cout<<"The value of data3 is: "<<data3<<endl;
}

int main(){
    complex c1(1, 2, 3);
    complex c2(1, 2);
    complex c3(1);
    c1.printdata();
    c2.printdata();
    c3.printdata();
    return 0;
}
//    -----------------------------------
//    // Implicit call
//     Complex a(4, 6);
//     a.printNumber();

//     // Explicit call
//     Complex b = Complex(5, 7);
//     b.printNumber();
