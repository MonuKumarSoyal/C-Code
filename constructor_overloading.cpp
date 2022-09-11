#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
        complex(void){
            a = 0;
            b = 0;
        }
        complex(int x){
            a = x;
            b = 0;
        }
        complex(int x, int y){
            a = x;
            b = y;
        }

        void printdata(void){
            cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1;
    c1.printdata();

    complex c2(1);
    c2.printdata();

    complex c3(5, 10);
    c3.printdata();
    
    return 0;
}
