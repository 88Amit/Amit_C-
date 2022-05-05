#include <iostream>
using namespace std;
class First 
{
	int x = 0;
	static int y;   // static data member
	public:
		void callagain()
		{
			++y;
			cout << "y  : " << y << "\n";
		}
		void callnormal()
		{
			++x;
			cout << "x  : " << x << "\n";
		}
	
};
int First::y = 0; // defination of static data member
int main()
{
	First f1, f2, f3, f4;
	f1.callagain();
	f2.callagain();
	f3.callagain();
	f4.callagain();
	cout << "_________________________ \n";
	f1.callnormal();
	f2.callnormal();
	f3.callnormal();
	f4.callnormal();

    return 0;
}

