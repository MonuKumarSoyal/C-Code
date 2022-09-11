#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator
{
    public:
        void addition_subtraction_multiplication(float a, float b);
        void division(float a, float b);
};

void SimpleCalculator :: addition_subtraction_multiplication(float a, float b)
{
    cout<< "The Addition of given numbers is: "<<a+b<<endl;
    cout<< "The Subtraction of given numbers is: "<<a-b<<endl; 
    cout<<"The Multiplication of given numbers is: "<<a*b<<endl;
}
void SimpleCalculator :: division(float a, float b)
{
    if(b == 0){
        cout<< "Mathematical Error in Division"<<endl;
    }
    else{
        cout<< "The Division of given numbers is: "<<a/b<<endl;
    }
}


class ScienctificCalculator
{
    public:
        void log(float a, float b);
        void Degree(float a, float b);
        void sinus_of_sum(float a, float b);
        void tangent_of_sum(float a, float b);
};

void ScienctificCalculator :: log(float a, float b){
    if(a ==0){
        cout<< "Mathematical Error in Logrithmic calculation"<<endl;
    }
    else{
        cout<<"The Logrithmic value of given number is: "<<((log2(b))/(log2(a)))<<endl;
    }
}

void ScienctificCalculator :: Degree(float a , float b){
    cout<<"The value of a^b is: "<<(pow(a, b))<<endl;
}

void ScienctificCalculator :: sinus_of_sum(float a, float b){
    float x = a + b;
    cout<<"The sin of a + b is: "<<sin(x)<<endl;
}

void ScienctificCalculator :: tangent_of_sum(float a, float b){
    float y = a + b;
    cout<<"The tan of a + b is: "<<tan(y)<<endl;
}

class HybridCalculator : public SimpleCalculator, public ScienctificCalculator
{
    public:
        void display(void){
                float a, b;
                cout<<"Enter the value of a and b"<<endl;
                cout<<"--------------------------------------------"<<endl;
                cin>>a>>b;
                cout<<"Output of simple calculator"<<endl;
                addition_subtraction_multiplication(a, b);
                division(a, b);
                cout<<"---------------------------------------------"<<endl;
                cout<<"Output of Scienctific Calculator"<<endl;
                log(a, b);
                Degree(a, b);
                sinus_of_sum(a, b);
                tangent_of_sum(a, b);
        }
};


int main(){
    HybridCalculator H;
    H.display();
    return 0;
}