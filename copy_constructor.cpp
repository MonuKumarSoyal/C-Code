#include<iostream>
using namespace std;


class number{
    int num;
    public:
        number(){
            num = 0;
        }

        number(int a){
            num = a;
        }

        //if copy constructor is not found then compiler uses its own copy constructor 

        number(number & object){
            cout<<"The Copy Constructor is invoked"<<endl;
            num = object.num; 
        }
        
        void printdata(void){
            cout<<"The value of the data is: "<<num<<endl;
        }
}; 


int main(){
    number a, b, c(5), d;
    a.printdata();
    b.printdata();
    c.printdata();
    
    d = c;
    d.printdata();

    number e(c);
    e.printdata();

    number f = c;
    f.printdata();
    
    return 0;
}