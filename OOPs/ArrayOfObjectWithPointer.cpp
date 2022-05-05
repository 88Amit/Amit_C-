#include <iostream>
using namespace std;

//Array of Object
class ProDetail {
	int proid;
	char proname[100];
	float proprice;
	public:
		void getprodetail() {
			cout << "Enter id, name and price of product  : ";
			cin>>proid>>proname>>proprice; 
		}
		void setprodetail() {
			cout << proid<< proname<< proprice;
		}
}; 

//Pointer with Object
class ProductDetail {
	int proid;
	char proname[100];
	float proprice;
	public:
		void getprodetail() {
			cout << "Enter id, name and price of product  : ";
			cin>>proid>>proname>>proprice; 
		}
		void setprodetail() {
			cout << proid<< proname<< proprice;
		}
}; 

int main(){
//    ProDetail p[2];
//    for(int i = 0; i < 2; i++ ) {
//    	p[i].getprodetail();
//	}
//	for(int i = 0; i < 2; i++ ) {
//    	p[i].setprodetail();
//	}
      ProductDetail p;
      cout << "Add. of p : " << &p;
      ProductDetail *ptr;
      ptr = &p; // Size of ptr is Sizeof(ptr) = 8;
      cout << "ptr  : \n" ;
      ptr->getprodetail(); // to call to call function with poinet we use arrow operaor ->
      ptr->setprodetail();
      
    return 0;
}

