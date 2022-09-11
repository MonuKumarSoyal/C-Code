#include<iostream>
using namespace std;

class Base{
    public:
    int var_base;
        void display(void){
            cout<<"The value of var_base is: "<<var_base<<endl;
        }
};

class Derived : public Base{
    public:
        int var_derived;
        void display(void){
            cout<<"The value of var_base is: "<<var_base<<endl;
            cout<<"The value of var_derived is: "<<var_derived<<endl;
        }
};

int main(){
    Base *base_class_pointer;
    Base obj_base;
    Derived obj_derived;
    base_class_pointer = &obj_derived;
    
    base_class_pointer->var_base = 100;
    // base_class_pointer->var_derived = 200;  // this will throw an error
    base_class_pointer->display();

    base_class_pointer->var_base = 500;
    base_class_pointer->display();

    Derived *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 1000;
    derived_class_pointer->var_derived = 2000;
    derived_class_pointer->display();

    return 0;
}