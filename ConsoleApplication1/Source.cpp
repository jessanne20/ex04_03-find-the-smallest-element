#include <iostream>
#include <string>
using namespace std;

int main(){
	int *x;

	cout << "How many numbers in the array? ";
	int num;
	cin >> num;

	x = new int[num];

	cout << "Enter " << num << " values for the array: ";
	for (int i = 0; i < num; i++){
		cin >> x[i];
	}	

	int small = x[0];
	for (int i = 0; i < num; i++){
		if (x[i] < small)
			small = x[i];
	}
		
	cout << "The smallest value in the array is: " << small << endl;
	
	return 0;
}