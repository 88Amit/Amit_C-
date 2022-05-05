#include <iostream>
using namespace std;

void swap(int arr[], int size){
	int start = 0;
    int end = size - 1;
    
	while(start<=end){
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}

void printArray(int arr[], int size){
	for( int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(){
    int size;
	cout << "Enter the size of an array : ";
	cin >> size;
	int arr[size];
	cout << "Enter the no. of an array " << endl;
	for (int i = 0; i < size; i++){
		cin >> arr[i];
	}
	swap(arr, size);
	printArray(arr, size);

    return 0;
}

