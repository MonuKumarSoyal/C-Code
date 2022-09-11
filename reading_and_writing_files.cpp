#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string str1 = "My name is Monu";

    // we have 2 types of opening a file 
    //     1. using constructor
    //     2. using the member function open()


    // opening file using constructor -------------

    ofstream obj_output("sample.txt");
    obj_output<<str1;
    obj_output.close();

    string str2;
    ifstream obj_input("sample.txt");
    // obj_input>>str2;
    // getline(obj_input, str2);
    // cout<<str2<<endl;
    while(obj_input.eof() == 0){
        obj_input>>str2;
        cout<<str2<<" ";
    }
    cout<<endl;
    obj_input.close();

// -------------------------------------------------------------------
    // opening file using constructor ------
    ofstream file("sample1.txt");
    string s;
    cout<<"Enter your name"<<endl;
    cin>>s;

    file<<s + " is my name";
    file.close();


    ifstream file1("sample1.txt");
    getline(file1, s);
    cout<<"The content of the file is -----"<<endl;
    cout<<s<<endl;
    file1.close();

// -----------------------------------------------------------------------

    // opening file using the member function open()    
    ofstream a;
    a.open("sample1.txt");

    a<<"This is line number 1"<<"\nThis is line number 2\nThis is line number 3\nThis is line number 4\nThis is line number 5\nThis is line number 6\nThis is line number 7";

    a.close();

    string ss;

    ifstream b;
    b.open("sample1.txt");

    while(b.eof() == 0){
        getline(b, ss);
        cout<<ss<<endl;
    }
    return 0;
}