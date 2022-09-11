#include<iostream>
using namespace std;

class c2;


class c1{
    int data1;
    friend void exchange(c1 &, c2 &);
    public:
        void SetData(int a){
            data1 = a;
        }
        void PrintData(){
            cout<<"The value of the data of c1 before exchanging "<<data1<<endl;
        }
};

class c2{
    int data2;
    friend void exchange(c1 &, c2 &);
    public:
        void SetData(int a){
            data2 = a;
        }
        void PrintData(){
            cout<<"The value of the data of c2 before exchanging "<<data2<<endl;
        }
};

void exchange(c1 &x, c2 &y){
    int temp = x.data1;
    x.data1 = y.data2;
    y.data2 = temp;
    cout<<"After exchanging :\nThe value of c1's data is: "<<x.data1<< "\nThe value of c2's data is: "<<y.data2<<endl;
}

int main(){
    c1 obj1;
    obj1.SetData(5);
    obj1.PrintData();

    c2 obj2;
    obj2.SetData(10);
    obj2.PrintData();

    exchange( obj1,  obj2);

    return 0;
}