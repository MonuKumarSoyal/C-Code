#include<iostream>
#include<vector>

using namespace std;

template<class t>
void display(vector<t> &vec){
    cout<<"The elements in your vector are: "<<endl;
    for(int i = 0; i<vec.size(); i++){
        // cout<<vec[i]<<" ";
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    int size, element;
    cout<<"Enter the size of the vector\n";
    cin>>size;
    vector<int> vec1;
    cout<<"Enter the elements in the vector"<<endl;
    for(int i = 0; i<size; i++){
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.pop_back();
    display(vec1);

    // constructing the iterator
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1, 10);
    display(vec1);

    // various methods to declaring vectors
    vector<int> vec2;  // vector with zero length
    vector<char>  vec3(4);  // vector of size 4
    vector<char>  vec4(vec3);  // vector of size 4 created form vec3
    vector<int>   vec5(4, 8);   // vector with size 4 containing 8 as its elements


    char char_element;
    cout<<"Enter the four elements for another vector"<<endl;
    for(int i = 0; i<4; i++){
        cin>>char_element;
        vec3.push_back(char_element);
    }
    display(vec3);
    cout<<"------------------------------"<<endl;
    display(vec4);

    return 0;
}