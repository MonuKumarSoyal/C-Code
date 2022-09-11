#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;

    cout<<"The value of a is "<<*ptr<<endl;

    float *p = new float(15.5);  // "new" keyword here works like malloc function in c language by which we can allocate the space in memory 
    cout<<"The value of another pointer is "<<*p<<endl;

    // creating an array by using new keyword

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    // using delete keyword 
    // delete [] arr; // this is to free the memory of the array arr
    cout<<"The value of arr[0] is: "<<arr[0]<<endl;
    cout<<"The value of arr[1] is: "<<arr[1]<<endl;
    cout<<"The value of arr[2] is: "<<arr[2]<<endl;
    return 0;
}