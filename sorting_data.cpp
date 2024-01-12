#include <iostream>
#include <vector>

using namespace std;

void sorting(vector<int> vec) {
	int auxVar; // A spare variable for sorting

	for (int j = 0; j < vec.size(); j++) { // An extra loop for sorting all elements of vector

		for (int i = 0; i < vec.size() - 1; i++) {

			if (vec[i] > vec[i + 1]) { // logic for swaping values if an element > next element
				auxVar = vec[i];
				vec[i] = vec[i + 1];
				vec[i + 1] = auxVar;
			};

			if (j == vec.size() - 1) { // displaying results after final sort loop
				cout
					<< "vec["
					<< i
					<< "] = "
					<< vec[i]
					<< endl;
			}
		};
	}
}

int main() {

	int num1, num2, num3, num4;

	vector<int> numbers(4);
	/*----------------Getting Inputs from User for sorting------------------*/
	cout
		<< "Enter 1st Random Number You want to sort: ";

	cin >> num1;

	cout
		<< "Enter 2nd Random Number You want to sort: ";

	cin >> num2;

	cout
		<< "Enter 3rd Random Number You want to sort: ";

	cin >> num3;

	cout
		<< "Enter 4th Random Number You want to sort: ";

	cin >> num4;

	/*--------------------------------------------------------------------*/

	numbers[0] = num1;
	numbers[1] = num2;
	numbers[2] = num3;
	numbers[3] = num4;

	sorting(numbers);

	return 0;
}