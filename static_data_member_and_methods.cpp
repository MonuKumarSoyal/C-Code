#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void SetId(void){
            cout<<"Enter the Id of the employee"<<endl;
            cin>>id;
            count++;
        }    
        void getId(void){
            cout<<"The Id of the employee is : "<<id<<" and this is the employee number "<<count<<endl;
        }
        static void getCount(void){
            cout<<"The total number of the employee is : "<<count;
        }
};

int Employee :: count; // The defalut value of the static variable is 0

int main(){
    Employee anil, monu, ravi;
    anil.SetId();
    anil.getId();
    Employee :: getCount();


    monu.SetId();
    monu.getId();
    Employee :: getCount();


    ravi.SetId();
    ravi.getId();
    Employee :: getCount();
    return 0;
}