#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int m, int n) {
	if (m <= 0 || n <= 0) {
		cout << "Invalid input";
	}
	else {
		for (int j = 0; j < m; j++){
			for (int i = 0; i < n; i++) {
				cout << "O";
			}
			cout << endl;
		}
		}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
