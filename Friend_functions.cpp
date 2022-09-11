#include<iostream>
using namespace std; 

// class complex;


class complex{
    int a, b;
    public:
        void SetData(int x, int y){
            a = x;
            b = y;
        }

    friend complex Sumcomplex(complex , complex );
        void PrintData(void){
            cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex Sumcomplex(complex o1, complex o2){
    complex o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;
    return o3;
}




int main(){
    complex o1, o2;
    o1.SetData(1, 2);
    o1.PrintData();

    o2.SetData(3, 4);
    o2.PrintData();

    complex o3 = Sumcomplex(o1, o2);
    o3.PrintData();

    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/