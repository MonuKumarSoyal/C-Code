#include<iostream>
using namespace std;

class Student 
{
    protected:
        int roll_number;
    public:
        void Set_roll_number(int a);
        void Get_roll_number(void);
};

void Student :: Set_roll_number(int a){
    roll_number = a;
}

void Student :: Get_roll_number(void){
    cout<<"The roll number is: "<< roll_number <<endl;
}

class Exam : public Student
{
    protected:
        float maths;
        float physics;
    public:
        void Set_marks(int a, int b);
        void Get_marks(void);
};

void Exam :: Set_marks(int a, int b){
    maths = a;
    physics = b;
}

void Exam :: Get_marks(void){
    cout<< "The marks in maths is: "<<maths<<endl;
    cout<< "The marks in physics is: "<<physics<<endl;
}

class Result : public Exam
{
    float percentage;
    public:
        void display_details(void){
            Get_roll_number();
            Get_marks();
            cout<<"The Result is: "<<(maths + physics)/2<<"%"<<endl;
        }
};

int main(){
    Result anil;
    anil.Set_roll_number(786);
    anil.Set_marks(99.0, 98.0);
    anil.display_details();
    return 0;
}