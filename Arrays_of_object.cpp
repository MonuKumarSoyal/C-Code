#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setdata(void){
            salary = 100;
            cout<<"Enter the id"<<endl;
            cin>>id;
        }

        void getdata(void){
            cout<<"The id is: "<<id<<endl;
        }
};

int main(){
    Employee array[4];
    for(int i = 0; i < 4; i++){
        array[i].setdata();
        array[i].getdata();
    }
    return 0;
}