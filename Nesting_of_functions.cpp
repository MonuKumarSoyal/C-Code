#include<iostream>
#include<string>
using namespace std;

class Binary {
    private:
        string s;
        void check_bin();
    public:
        void read_bin();
        void ones_compliment();
        void display_bin();
};

void Binary :: read_bin(){
    cout<< "Enter the Number"<<endl;
    cin>>s;
}

void Binary :: check_bin(){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<< "Number is not a Binary Number";
            exit(0);
        }
    }
}

void Binary :: ones_compliment(){
    check_bin();
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void Binary :: display_bin(){
    cout<<"Complemented Binary Number is: "<<endl;
    for(int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
}


int main(){
    Binary Number;
    Number.read_bin();
    // Number.check_bin();   // This will throw an error since we can't access the private members at here
    Number.ones_compliment();
    Number.display_bin();
    return 0;
}