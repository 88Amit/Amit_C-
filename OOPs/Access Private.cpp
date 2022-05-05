#include <iostream> // Access private data outside the class.
using namespace std;

class Test {
	int x = 10, y = 20; // datamember by default private
	public:
	int returnx(){
	   return x;	
	} 
	int returny() {
		return y;
	}
};
int main(){
    int a, b;
    Test t1;
    a = t1.returnx();
    b = t1.returny();
    cout << a << "\n" << b << "\n";
    return 0;
}

