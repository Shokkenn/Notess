#include<iostream>
#include<string>
using namespace std;

class person{
    int id;
    float rollNo;
    public:
    void getdata();
    void display(){
        cout << rollNo << endl << id << endl << endl;
    }
};

void person :: getdata(){
    cin >> id >> rollNo;
}
int main(){
    int n;
    cout << "Number of objects:";
    cin >> n;
    person *prsn = new person[n];
    person *pi = prsn;  ////must as p[i] is not a pointer it's the object itself
    for(int i=0; i<n; i++){
        pi[i].getdata();
    }
    for(int i=0; i<n; i++){
        pi->display();
        pi++;
    }
    return 0;
    
}