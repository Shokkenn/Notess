#include<iostream>
#include<string>
using namespace std;

class person{
    public:
      static int cnt;
      person(){
        ++cnt;
      }
      static void display(){
        cout << "Display " << cnt << endl;
      }
};

int person :: cnt = 0;
int main(){
    cout << person :: cnt << endl;
    person prsn1, prsn2, prsn3, prsn4;
    person :: display();
    cout << person :: cnt << endl;
    return 0;
}

/*
O/P :  0 
       display 4
       4

*/