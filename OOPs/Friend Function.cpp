#include <iostream>
using namespace std;

// Example 1 
//class Marks {
//	int m1 = 35, m2 = 60, m3 = 35;
//	public:
//		void display() 
//		{
//			cout << "m1   : " << m1 << "\n";
//			cout << "m2   : " << m2 << "\n";
//			cout << "m3   : " << m3 << "\n";
//		}
//		friend void update(Marks &m);
//};
//void update(Marks &m) { // Non member function
//	m.m1 = 59;
//	m.m3 = 88;
//	m.display();
//}
//
//int main(){
//    
//    Marks m;
//    m.display();
//    update(m);
//    return 0;
//}

//Example 2
class Second; // Forward declaration 
class First {
	int x, y;
	public: 
	void gtdata() {
		cout << "Enter x and y : \n";
		cin >> x >> y; 
	}
	void display() {
		cout << "x  : " << x << endl;
		cout << "y  : " << y  << endl;
	}
	friend First sum(First f1, Second s1);
};
class Second {
	int a, b;
	public: 
	void gtdata() {
		cout << "Enter a and b : \n";
		cin >> a >> b; 
	}
	void display() {
		cout << "a  : " << a << endl;
		cout << "b  : " << b << endl;
	}
	friend First sum(First f1, Second s1);
};
First sum(First f1, Second s1) {
	First f;
	f.x = f1.x + s1.a;
	f.y = f1.y + s1.b;
	
	return f;
}
int main() {
	First f1, f2;
	Second s1;
	f1.gtdata();
	f1.display();
	s1.gtdata();
	s1.display();
	f2 = sum(f1, s1); // non member function
	f2.display();
	
	return 0;
}



