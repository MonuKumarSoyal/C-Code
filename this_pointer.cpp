#include<iostream>
using namespace std;

class A{
    int a;
    public:
        void setdata(int a){
            this->a = a;
        }
        A& returndata(int a){
            this->a = a;
            return (*this);

        }
        void display(void){
            cout<<"The value of a is: "<<a<<endl;
        }
};

int main(){
    A a;
    a.setdata(5);
    a.display();

    A b;
    b = b.returndata(10);
    b.display();
    // or 
    b.returndata(15).display();

    return 0;
}