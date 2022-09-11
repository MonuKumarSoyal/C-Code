#include<iostream>
#include<string>
using namespace std;

string year(int y);

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float ReturnValue;
    friend string year(int a);
    public:
        BankDeposit(){}
        BankDeposit(int p, int y, float r);
        BankDeposit(int p, int y, int r);

        void show(void){
            cout<<"The Principal amount is: "<<principal<<endl
                <<"After "<<years<<" "<<year(years)<<" the return value is: "<<ReturnValue<<endl;
        }        
};

BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    ReturnValue = float(principal);
    for(int i = 0; i < years; i++){
        ReturnValue = ReturnValue * (1 + interestRate);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;
    ReturnValue = float(principal);
    for(int i = 0; i < years; i++){
        ReturnValue = ReturnValue * (1 + interestRate);
    }
}



string year(int y)
{
    if(y == 1){
        return ("year");
    }
    else{
        return("years");
    }
}

int main(){
    int p, y, R;
    float r;
    cout<<"Enter the value of p, y and r"<<endl;
    cin>>p>>y>>r;

    BankDeposit obj1(p, y, r);
    obj1.show();

    cout<<"Enter the value of p, y and R"<<endl;
    cin>>p>>y>>R;
    BankDeposit obj2(p, y, R);
    obj2.show();

    return 0;
}