#include<iostream>
using namespace std;

class Base{
    private:
        int a;
    protected:
        int b;
};

class Derived{
    // just for checking the behavior of the Derived class
};

/*
        class member                  visibility mode →
            ↓
                        public mode             private mode            protected mode                
         private        not inherited           not inherited           not inherited

         protected      protected               private                 protected

         public         public                  private                 protected
*/


int main(){
    Base b;
    Derived d;
    // d.a;  // conceptually this will throw an error since a is the private memeber
    // d.b;  // this will also throw error because protected member can't be accessed directly

    return 0;
}