/*This Pointer

1. "this " is a keyword.
2. It is special type of pointer of c++ which is accessed only in member function means we can not use "this pointer" outside the member function 
3. "this pointer" hold the address of current invoking object. */

#include <iostream>
using namespace std;

class Check
{
    int a, b;
	public:
	   void getcheck() {
	   	int a, b;
	   	cout << "Enter a and b  :" << endl;
	   	cin>>a>>b;
	   	cout<<a<<" "<<b<<endl;
	   	cout<<"_____________________________"<<endl;
	   	cout << "Enter a and b data members :" << endl;
	   	cin>>this->a>>this->b;
	   } 	
	   void display(){
	   	cout<<"a data member :" <<a<< endl;
	   	cout<< "b data member :" <<b<< endl;
	   }
	   Check returnobject() {
	   	return *this;
	   }
};
int main(){
    Check c, c1;
    c.getcheck();
    c.display();
    c1 = c.returnobject();
    c1.display();
    return 0;
}

