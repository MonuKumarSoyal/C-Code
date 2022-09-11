#include<iostream>
using namespace std;

class shopitem{
    int Id;
    float price;
    public:
        void setdata(int a, float b){
            Id = a;
            price = b;
        }
        void getdata(void){
            cout<<"The Id of the item is: "<<Id<<endl;
            cout<<"The price of the item is: "<<price<<endl;
        }
};

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int size;
    cout<<"Enter the value of the size for array"<<endl;
    cin>>size;
    shopitem *ptr = new shopitem[size];
    int i, p;
    float q;
    for(i = 0; i<size; i++)
    {
        cout<<"Enter the id and price of item "<<(i+1)<<endl;
        cin>>p>>q;
        (ptr + i)->setdata(p, q);
    }
    for(i = 0; i< size; i++){
    cout<<"------------------------------"<<endl;
        cout<<"Item number is: "<<i+1<<endl;
        (ptr + i)->getdata();
    }



    int a = 2, b = 5;
    cout<<"The value of a is: "<<a<<" and the value of y is: "<<b<<endl;
    swap(a, b);
    cout<<"The value of a is: "<<a<<" and the value of y is: "<<b<<endl;
    return 0;
}