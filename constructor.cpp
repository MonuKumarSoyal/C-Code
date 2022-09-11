#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
        complex(int x, int y); // This is the declaration of the constructor

        void printdata(){
            cout<<"The value of a is: "<<a<<endl<<"The value of b is: "<<b<<endl;
            
        }
};


complex :: complex(int x, int y){
    a = x;
    b = y;
}

int main(){
    complex c1(1, 2), c2(4, 5);
    c1.printdata();
    c2.printdata();
    
    return 0;
}