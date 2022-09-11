#include<iostream>
using namespace std;

class Y;

class X{
    int data1;
    friend void add(X, Y);
    public:
        void SetData(int value){
            data1 = value;
        }

        void PrintData(){
            cout<<"The value of X-point is : "<<data1<<endl;
        }
};

class Y{
    int data2;
    friend void add(X, Y);
    public:
        void SetData(int value){
            data2 = value;
        }
        void PrintData(void){
            cout<<"The value of Y-point is : "<<data2<<endl;
        }
};

void add(X x, Y y){
    cout<<"The sum of the x and y is : "<< x.data1 + y.data2;
}

int main(){

    X x;
    x.SetData(5);
    x.PrintData();

    Y y;
    y.SetData(10);
    y.PrintData();

    add(x, y);

    return 0;
}