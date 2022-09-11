#include<iostream>
#include<list>
using namespace std;

void display(list<int> &li){
    list<int> :: iterator iter;
    for(iter = li.begin(); iter!=li.end(); iter++){
        cout<<(*iter)<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1;        // list with zero length
    list1.push_back(1);
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(2);
    list1.push_back(3);

    display(list1);
    list1.sort();
    display(list1);
    list1.reverse();
    display(list1);



    // one more example for making a list by using iterator.
    cout<<"----------------------------------------------\n";

    list<int> list2(5);     // list with length 3

    list<int> :: iterator itr;
    itr = list2.begin();

    for(int i = 0; itr!=list2.end(); i++){
        *itr = i+10;
        itr++;
    }
    display(list2);
    list2.pop_back();
    display(list2);
    list2.pop_front();
    display(list2);

    list2.push_back(100);
    list2.push_back(100);
    list2.push_back(100);
    display(list2);

    list2.remove(100);
    display(list2);



    return 0;
}