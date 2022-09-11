#include<iostream>
using namespace std;


// by default visibility mode will be private 

class Employee{
    public:
        int id;
        float salary;

        Employee(int intid){
            id = intid;
            salary = 100;
        }

        Employee(){}
};

class programmer : public Employee{
    public:
        int languageCode;
        programmer(int intid){
            id = intid;
            languageCode = 5;
        }

        void getdata(){
            cout<<"The id of programmer is: "<<id<<endl;
        }
};

int main(){
    
    Employee a(10), b(20);
    cout<< a.id<<endl;
    cout<< b.id<<endl;

    programmer pro(200);
    cout<< pro.languageCode<<endl;
    cout<< pro.id<< endl;
    cout<<pro.salary<<endl;
    pro.getdata();

    return 0;
}