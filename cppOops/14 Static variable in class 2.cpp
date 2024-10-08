#include<iostream>
#include<string>
using namespace std;

class person{
    public:
      static int cnt;
      person(){
        ++cnt;
      }
      void display(){
        cout << "Display " << cnt << endl;
      }
};
int person :: cnt = 0; //must declare outside the class

int main(){
    cout << person :: cnt << endl;
    person prsn1, prsn2, prsn3, prsn4;
    prsn3.display();
    cout << person :: cnt << endl;
    return 0;
}

/*
O/P : 0
      Display 4
      4
*/