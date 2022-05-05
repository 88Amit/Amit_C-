#include <iostream>
using namespace std;

class Demo {
	int x, y; // By defult private    DATA MEMBER
	public:
		void getdata() {
			cout << "Pleasse enter two number :\n";
			cin >> x >> y;
		}
		void setdata() {
			cout << x << endl;
			cout << y << endl;
		}
		
};
// Way of defining member fumction
// Inline member function (FUNCTION DECLERE INSIDE THE CLASS)
// OFFLINE member function (FUNCTION DECLERE OUTSIDE THE CLASS)
class Test {
	int x, y; // By defult private    DATA MEMBER
	public:
		// Inline member function
//		void getdata() {
//			cout << "Pleasse enter two number :\n";
//			cin >> x >> y;
//		}
//		void setdata() {
//			cout << x << endl;
//			cout << y << endl;
//		}
    // Offline member function
		void getdata(); // Prototype, signature, declaration
		void setdata();
};
        void Test::getdata() {
			cout << "Pleasse enter two number :\n";
			cin >> x >> y;
		}
		void Test::setdata() {
			cout << x << endl;
			cout << y << endl;
		}

int main(){
    
    Test d1; // d1 is ka object/instance/variable of the class
    d1.getdata();
    d1.setdata();
    return 0;
}

