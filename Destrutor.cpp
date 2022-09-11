#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value.

int count = 0;

class num{
    // static int count; 
    public:
        num(){
            count++;
            cout<<"The constructor is called for the object number "<<count<<endl;
        }   

        ~num(){
            cout<<"The Deconstructor is called for the object number "<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside the main function"<<endl;
    cout<<"creating the object"<<endl;
    num n1;
    {
        cout<<"Entering into block"<<endl;
        cout<<"Creating two objects "<<endl;
        num n2, n3;
        cout<<"Exiting from block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}