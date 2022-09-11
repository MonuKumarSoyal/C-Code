#include<iostream>
#include<string>

using namespace std;

class Chennel{
    protected:
        string title;
        float rating;
    public:
       Chennel(string s, float r){
            title = s;
            rating = r;
       } 
       virtual void display(){}
};

class Chennel_Video : public Chennel{
    float videolength;
    public:
        Chennel_Video(string s, float r, float vl): Chennel(s, r){
            videolength = vl;
        }

        void display(void){
            cout<< "This is an amazing video with title "<<title<<endl
                << "The rating of the video is "<<rating<<endl
                << "The length of the video is "<<videolength<<" minutes"<<endl; 
        }

};

class Chennel_Text : public Chennel{
    int words;
    public:
        Chennel_Text(string s, float r, float wd) : Chennel(s, r){
            words = wd;
        }

        void display(void){
            cout<< "This is an amazing Text Tutorial with title "<<title<<endl
                << "The rating of this tutorial is "<<rating<<endl
                << "The count of words in this tutorial are "<<words<<endl;
        }
};

int main(){
    string title;
    float rating, videolength;
    int words;

    // making object of Chennel_Video class
    title = "C++ Tutorial";
    rating = 4.89;
    videolength = 5.20;
    Chennel_Video cv(title, rating, videolength);
    cv.display();

    // making object of Chennel_Text class
    title = "C++ Tutorial";
    rating = 4.55;
    words = 599;
    Chennel_Text ct(title, rating, words);
    ct.display();

    cout<<"---------------------------------------------------------"<<endl;
    // making a pointer with Chennel class 
    Chennel *ptr[2];
    ptr[0] = &cv;
    ptr[1] = &ct;

    ptr[0]->display();
    ptr[1]->display();

    

    return 0;
}




