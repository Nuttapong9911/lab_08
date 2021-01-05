#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, inte_rate, pay_year, NewBalance, total, Interest;
	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> inte_rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay_year;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int i = 1;
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(true) {
	
	if(i != 1) {
		loan = NewBalance;
	} 
	Interest = inte_rate/100*loan;
	total = loan + Interest;
	if(total < pay_year) {
		pay_year = total;
	}
	NewBalance = total - pay_year;

	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay_year;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	
	
	if (NewBalance == 0) 
		break;
	
	i++;
	}
	
	return 0;
}
