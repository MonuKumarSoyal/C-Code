#include<iostream>
using namespace std;

class Base{
    public: 
        int var_base = 1;
        // below function is virtual function
        virtual void display(){
            cout<<"The value of the var_base is: "<<var_base<<endl;
        }
};

class Derived : public Base{
    public:
        int var_derived  = 5;
        void display(){
            cout<<"The value of the var_base is: "<<var_base<<endl;
            cout<<"The value of the var_derived is: "<<var_derived<<endl;
        }
};

int main(){
    Base *base_pointer;
    Base base_obj;
    Derived derived_obj;
    base_pointer = &derived_obj;

    base_pointer->display();

    return 0;
}