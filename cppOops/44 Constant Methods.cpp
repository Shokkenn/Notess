#include<iostream>
#include<string> 
using namespace std;

class fun
{
	public:
		int v;
		int display(int x) const
		{
			//v=x;error cause a local variable of the method is changing .it's used to avoid accidental errors
			return v;
		}
};
int main() 
{
	fun ab;
	cout<<ab.display(15);
	cout<<ab.display(20);
  return 0; 
}