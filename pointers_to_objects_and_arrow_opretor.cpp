#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
    int c;
        void setdata(int a, int b){
            real = a;
            imaginary = b;
        }
        void getdata(void){
            cout<<"The Real part of complex number is: "<<real<<endl;
            cout<<"The Imaginary part of complex number is: "<<imaginary<<endl;
        }
};


int main(){
    complex *ptr = new complex;
    (*ptr).setdata(1, 5);
    (*ptr).getdata(); 

    // one more way to use the members of the class...
    ptr->setdata(5, 10);
    ptr->getdata();
    ptr->c = 100;
    cout<<"The value of another class member is: "<<ptr->c<<endl;
    cout<<"-----------------------------------"<<endl;
    complex *p = new complex[3];

    for(int i = 0; i<3; i++){
        (ptr+i)->setdata(i, i+1);
        (ptr+i)->getdata();
    }

    return 0;
}