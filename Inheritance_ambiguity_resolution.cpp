#include<iostream>
using namespace std;

class Base1
{
    public:
        void greet(void){
            cout<<"How are you"<<endl;
        }
};

class Base2
{
    public:
        void greet(void){
            cout<<"Kease Ho"<<endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
    public:
         void greet(void){
             Base1 :: greet();  // to resolve the ambiguity we have to specify here which one function we want to use.
         }
};

// ---------------------

class B{
    public: 
        void say(void){
            cout<<"Hello how are you?"<<endl;
        }
};


class D : public B{
    public:
        void say(void){
            cout<<"Hello what are you doing?"<<endl;
        }
};


int main(){
    // Base1 o1;
    // Base2 o2;
    // o1.greet();
    // o2.greet();

    // Derived d;
    // d.greet();

    B b;
    b.say();

    D d;
    d.say();
    return 0;
}