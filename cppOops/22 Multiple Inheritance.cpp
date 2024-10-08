#include<iostream>
#include<string>
using namespace std;

class parentFather{
    public:
         int height;
         void askfather(){
            cout << "I'm your father\n";
         }
};

class parentMother{
    public:
        string color;
        void askmother(){
            cout << "I'm your mother\n";
        }
};

class child : public parentFather, public parentMother{
    public:
        void setdata(string str, int len){
            height = len;
            color = str;
        }
        void display(){
            cout << height << endl << color << endl;
            // cout << "Height: " << height << "\nColor: " << color << endl;
        }
};

int main(){
    child ch;
    ch.askfather();
    ch.askmother();
    ch.setdata("kajal", 20);
    ch.display();
    return 0;
}