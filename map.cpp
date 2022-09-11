#include<iostream>
#include<string>
#include<map>
using namespace std;


void display(map<string, float> &Marksmap){
    map<string, float>::iterator iter;
    for(iter = Marksmap.begin(); iter != Marksmap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
}   

int main(){
    map<string, float>  MarksMap;
    int size;
    cout<<"Enter the size of the map: "<<endl;
    cin>>size;
    for(int i = 0; i<size; i++){
        string name;
        float marks;
        cout<<"Enter the name of the student: "<<endl;
        cin>>name;
        cout<<"Enter the Marks of the student: "<<endl;
        cin>>marks;
        // MarksMap.insert({name, marks});
        MarksMap[name] = marks;
    }
    
    cout<<"-------------------------------"<<endl;
    display(MarksMap);
    MarksMap.insert({{"anil", 9.5}, {"ravi", 9.75}});
    cout<<"-------------------------------"<<endl;
    display(MarksMap);
    cout<<"-------------------------------"<<endl;
    cout<<"The size of the map is: "<<MarksMap.size()<<endl;

    return 0;
}
