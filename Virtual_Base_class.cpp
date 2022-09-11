#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int a);
        void print_roll_number(void);
};

void Student :: set_roll_number(int a){
    roll_number = a;
}

void Student :: print_roll_number(void){
    cout<< "The Roll Number is: "<<roll_number<<endl;
}


class Test : virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void print_marks(void){
            cout<<"The Marks in Maths are: "<<maths<<endl
                <<"The Marks in physics are: "<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"The Score in Sports are: "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
            print_roll_number();
            print_marks();
            print_score();
            cout<< "Total marks obtained by student are: "<<total<<endl;
        }
};


int main(){
    int a;
    float b, c, d;
    cout<<"Enter the Roll Number: "<<endl;
    cin>>a;
    cout<<"Enter the marks: "<<endl;
    cin>>b>>c;
    cout<<"Enter the score: "<<endl;
    cin>>d;
    Result student;
    student.set_roll_number(a);
    student.set_marks(b, c);
    student.set_score(d);
    student.display();
    return 0;
}