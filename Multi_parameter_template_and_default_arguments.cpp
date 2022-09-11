#include<iostream>
using namespace std;

template<class T1, class T2>
class MyClass{
    T1 data1;
    T2 data2;
    public:
        MyClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(void){
            cout<<data1<<" "<<data2<<endl;
        }
};

template<class t1 = int, class t2 = float, class t3 = char>
class data{
    t1 d1;
    t2 d2;
    t3 d3;
    public: 
        data(t1 a, t2 b, t3 c){
            d1 = a;
            d2 = b;
            d3 = c;
        }
        void display(void){
            cout<<"The value of d1 is: "<<d1<<endl;
            cout<<"The value of d2 is: "<<d2<<endl;
            cout<<"The value of d3 is: "<<d3<<endl;
        }
};

int main(){
    MyClass<int, char> a(1, 'a');
    MyClass<float, int> b(2.50, 50); 
    a.display();
    b.display();
    cout<<"-------------------------------"<<endl;

    data<> c(1, 3.3, 'a');
    c.display();
    cout<<"--------------------------------\n";
    data<float, char, int> d(1.5, 'b', 10);
    d.display();
    return 0;
}