#include<iostream>
#include<cstring>
using namespace std;

class person{
    int len;
    char *name;
    public:
    void getdata();
    void display(){
        cout << name << endl << endl;
    }
};

void person :: getdata(){
    char * ch = new char[20];
    cin >> ch;
    len = strlen(ch);
    name = new char[len];
    strcpy(name, ch);
}

int main(){
    int n;
    cout << "Number of objects:";
    cin >> n;
    person *prsn = new person[n];
    for(int i=0; i<n; i++){
        prsn[i].getdata();
    }
    for(int i=0; i<n; i++){
        prsn[i].display();
    }
    return 0;
}