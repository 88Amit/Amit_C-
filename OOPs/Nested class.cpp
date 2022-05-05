 //Nested class in oops
 #include <iostream>
using namespace std;

class First 
{
	int x, y;
	class Second 
	{
		int a,b;
		public:
			void get()
			{
				cout << "Enter a and b : \n";
				cin >> a >> b;
			}
			void show()
			{
				cout << "a  :" << a << endl;
				cout << "b  :" << b << endl;
			}
	};
  	public:
  		Second s1;
  		    void get()
			{
			    cout<<"Enter x and y  : " << endl;
			    cin >> x >> y; 
		    }
		    void show() 
			{
			    cout << "x  : " << x << endl;
			    cout << "y  : " << y << endl;
		    }
};
int main(){
	First f1;
	f1.get();
	f1.show();
    f1.s1.get();
    f1.s1.show();
    return 0;
}

