#include <iostream>
using namespace std;

class Demo {
	int x, y; // DATA MEMBER
	public:
		void getdata() {
			cout << "Pleasse enter two number for local variable :\n";
			int x, y; // Local variable
			cin >> x >> y;
			cout << "Local x & y : " << x << " " << y << "\n";
			cout << "Enter 2 numbers for Data member \n";
			cin >> Demo::x >> Demo::y;
		}
		void setdata() {
			cout << x << endl;
			cout << y << endl;
		}
		
};


int main(){
    
    Demo d1; // d1 is a object/instance/variable of the class
    d1.getdata();
    d1.setdata();
    return 0;
}
