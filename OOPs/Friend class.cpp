#include <iostream>
using namespace std;

class Second;
class First 
{
    int x, y;
	friend class Second;	
};
class Second
{
	public:
		void getdata(First &f)
		{
			cout << "Enter x and y  : \n";
			cin >> f.x >> f.y;
		}
		void display(First &f) {
			cout << "x  : " << f.x << endl;
			cout << "y  : " << f.y << endl;
		}
};
int main()
{
    First f1;
	Second s1;
	s1.getdata(f1);
	s1.display(f1);
	   
    
    return 0;
}

