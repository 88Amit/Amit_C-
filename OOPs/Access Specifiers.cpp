#include <iostream>
using namespace std;

class Demo {
	private: int x = 10;
	protected: int y = 20;
	public: int z = 30;
};
int main(){
      Demo d1; // d1 is a variable/object
      int a;
      cout << d1.z;
    return 0;
}

