//Linear search in array
#include <iostream>
using namespace std;


bool search(int arr[], int n,int key){
	for(int i = 0; i < n; i++){
		if (arr[i] == key)
		return 1;
	}
	return 0;
}

int main(){
    int n;
    cout << "Enter the size of an array: " << endl;
    cin>>n;
    int arr[n];
    cout << "enter an array" << endl;
    for(int i = 0; i < n; i++){
    	cin>>arr[i];
	}
	int key;
	cout << "enter a no. to be search : " << endl;
	cin >> key;
	
	bool found = search(arr, n, key);
	
	if (found){
		cout << "key is present" << endl;
	}
	else 
	{
		cout << "key is absent" << endl;
	}

	return 0;
}




























