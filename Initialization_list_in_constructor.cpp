#include<iostream>
using namespace std;

class demo{
    // when we are declaring these value then value will be assigned in their declaration order
    int a;
    int b;
    public:
        // demo(int i, int j): a(i), b(j)
        // demo(int i, int j): b(j), a(i) 
        // demo(int i, int j): a(i + 2), b(j*2)
        // demo(int i, int j): a(i + b), b(j)  // will throw an error since first value will be assigned to a then b 
        demo(int i, int j): a(i)
        {
            b = j;
            cout<<"constructor is called"<<endl;
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
        }
};


int main(){
    demo d(1, 2);
    return 0;
}