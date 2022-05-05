// Friendship to member function of another class
#include <iostream>
using namespace std;

class First;
class Second {
	int l, m;
	public:
		void get()
		{ // in line function
			cout<<"Enter l and m  : " << endl;
			cin >> l >> m;
		}
		void display() 
		{
			cout << "l  : " << l << endl;
			cout << "m  : " << m << endl;
		}
		void myswap(First &); // offline function
};
class First 
{
	int x,y;
	public:
		void get(){
			cout<<"Enter x and y  : " << endl;
			cin >> x >> y;
		}
		void display() {
			cout << "x  : " << x << endl;
			cout << "y  : " << y << endl;
		}
		friend void Second::myswap(First &f); 
};
void Second::myswap(First &f)
{
	int temp;
	temp = l;
	l = f.x;
	f.x = temp;
	
	temp = m;
	m = f.y;
	f.y= temp;
}
int main()
{
	First f1;
	Second s1;
	f1.get();
	f1.display();
	s1.get();
	s1.display();
    s1.myswap(f1);
    cout << "______________________________" << endl;
    cout << "After Swapping    : \n";
    s1.display();
    f1.display();
    return 0;
}

