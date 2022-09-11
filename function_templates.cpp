#include<iostream>
using namespace std;

template<class T1, class T2>
float FuncAverage(T1 a, T2 b){
    float c = (a+b)/2.0;
    return c;
}

template<class t>
void To_Swap(t &a, t &b){
    t temp = a;
    a = b;
    b = temp;
}

int main(){
    float average;
    int a, b;
    cout<<"Enter the Numbers"<<endl;
    cin>>a>>b;
    average = FuncAverage(a, b);
    cout<<"The Average of given numbers is: "<<average<<endl;
    
    cout<<"------------------------------------------\n";
    float c, d;
    cout<<"Enter the Numbers"<<endl;
    cin>>c>>d;
    average = FuncAverage(c, d);
    cout<<"The Average of given numbers is: "<<average<<endl;

    cout<<"------------------------------------------\n";
    int x = 6, y = 10;
    cout<<"The values of a and b before swapping: "<<x<<"   "<<y<<endl;
    To_Swap(x, y);
    cout<<"The values of a and b after swapping: "<<x<<"   "<<y<<endl;

    return 0;
}