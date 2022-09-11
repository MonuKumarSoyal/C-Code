#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
        void setData(void){
            cout<<"Enter the data"<<endl;
            cin>>a;
            cin>>b;
        }

        void printdata(void){
            cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
        
        void summation(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

};

int main(){
    complex array[3];
    for(int i = 0; i < 2; i++){
        array[i].setData();
        array[i].printdata();
    }
    array[2].summation(array[0], array[1]);
    array[2].printdata();
    return 0;
}