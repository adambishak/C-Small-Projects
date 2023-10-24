#include<iostream>
using std::cin;
using std::cout;

int main(){
	double numerator{0};
	double denominator{0};
	cout << "To divide enter a numerator followed by a denominator seperated by a space: ";
	cin >> numerator >> denominator;
	cout << "The result of the division is: " << numerator/denominator;
	int numerator_int{static_cast<int>(numerator)};
	int denominator_int{static_cast<int>(denominator)};
	cout << "The result of division as integers: " << numerator_int/denominator_int;
	cout << "The remainder from integer division: " << numerator_int%denominator_int;
	return 0;
}