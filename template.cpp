#include<iostream>
using namespace std;

template <class T>
class vector{
    public:
        T *arr;
        int size;
        vector(int a){
            size = a;
            arr = new T[size];
        }
        float dotproduct(vector &v){
            float d = 0.0;
            for(int i = 0; i< size; i++){
                d += this->arr[i]*v.arr[i];
            }
            return d;
        }
};

int main(){
    cout<<"Enter the size of the array: "<<endl;
    int size1;
    cin>>size1;
    vector <float> v1(size1);
    for(int i = 0; i<size1; i++){
        cin>>v1.arr[i];
    }

    cout<<"Enter the size of the array: "<<endl;
    int size2;
    cin>>size2;
    vector <float> v2(size2);
    for(int i = 0; i<size2; i++){
        cin>>v2.arr[i];
    }
    float x = v1.dotproduct(v2);

    cout<<"The Dot product of vectors is: "<<x<<endl;

    return 0;
}