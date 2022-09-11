#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

void display(int arr[]){
    for(int i = 0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    // function objects(also known as Functor) ---->  A function wrapped into a class so that it is availale like an object
    cout<<"-----------------------------\n";
    int arr[] = {1, 4, 2, 6, 3, 5};
    display(arr);

    cout<<"-----------------------------\n";
    sort(arr, arr+6);     // sort(address of first element, address of last element)
    display(arr);

    cout<<"-----------------------------\n";
    sort(arr, arr+6, greater<int>());
    display(arr);
    cout<<"-----------------------------\n";

    return 0;
}