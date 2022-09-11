#include<iostream>
using namespace std;

template<class T>
class PrintData{
    T data;
    public:
        PrintData(T a){
            data = a;
        }
        void Display(void);
};

// This is how we declare the class function outside the class when using a template

template<class T>
void  PrintData<T>:: Display(void){
    cout<<"The value of data is: "<<data<<endl;
}


void func(int a){
    cout<<"Value of a in normal function is: "<<a<<endl;
}

template<class t>
void func(t a){
    cout<<"Value of a in templatised function is: "<<a<<endl;
}


int main(){
    PrintData<int> p(5);
    PrintData<char> q('c');
    p.Display();
    q.Display();

    func(3);   // function who is not templatised will get invoked by this since in case of data types that function is hard coded.
    return 0;
}