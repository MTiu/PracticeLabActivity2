// PracticeLabActivity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

void program1() {
	cout << "Program 1" << endl;
	cout << "For loop:" << "\n" << endl;
	for (int x = 1; x <= 5; x++) {
		cout << x << endl;
	};
	cout << endl;
	cout << "While loop" << "\n" << endl;
	int whileX = 1;
	while (whileX < 6) {
		cout << whileX << endl;
		whileX++;
	}
	cout << endl;
	whileX = 1;
	cout << "Do-while loop" << "\n" << endl;
	do {
		cout << whileX << endl;
		whileX++;
	} while (whileX < 6);
	cout << endl;
	return;
}

void program2() {
	cout << "Program 2" << endl;
	cout << endl;
	string monthArray[12] = { "January", "February","March","April",
							"May","June","July","August",
							"September","October","November","December" };
	for (int x = 9; x <= 11; x++) {
		cout << monthArray[x] << endl;
	}
	cout << endl;
	return;
}

void program3() {

	cout << "Program 3" << endl;

	int iterateArray[10] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int x = 0; x < 10; x++) {
		cout << iterateArray[x] * 10 << endl;
	}
	for (int x = 0; x < 10; x += 3) {
		cout << iterateArray[x] * 10 << endl;
	}
	cout << endl;
	return;
}

void program4() {
	cout << "Program 4" << endl;
	double averageArray[5] = { 12,15,18,21,24 };
	double averageTotal = 0;
	for (int x = 0; x <= 4; x++) {
		averageTotal += averageArray[x];
	}
	cout << averageTotal / 5 << endl;
	cout << endl;
	return;
}

void program5() {
	cout << "Program 5" << endl;
	int reverseArray[] = { 1,2,3,4,5,6,7,8,9 };
	int arraySize = sizeof(reverseArray) / sizeof(reverseArray[0]);
	
	cout << "Original Array" << endl;
	for (int x = 0; x <= 8; x++) {
		cout << reverseArray[x] << " ";
	}
	cout << endl;
	sort(reverseArray, reverseArray + arraySize,greater<int>());
	cout << "Reverse Array" << endl;
	for (int i = 0; i < arraySize; i++)
		cout << reverseArray[i] << " ";
	
}

void program6() {
	cout << "Program 6" << endl;
	int repeating, number;
	cout << "Enter N number of times to repeat!" << endl;
	cin >> repeating;
	int* ascDescArray = new int[repeating];

	for (int x = 0; x < repeating; x++) {
		cout << "Enter a number" << endl;
		cin >> number;
		ascDescArray[x] = number;
	}
	cout << "Ascending Array" << endl;
	for (int x = 0; x < repeating; x++) {
		cout << ascDescArray[x] << " ";
	}
	cout << endl;

	cout << "Descending Array" << endl;
	for (int x = repeating - 1; x >= 0; x--) {
		cout << ascDescArray[x] << " ";
	}
	cout << endl;
	delete[] ascDescArray;
	return;
	
}






int main()
{
	int programmer;
	cout << "Please Choose Program Number!" << endl;
	cout << "Program 1 is the Loop Program" << endl;
	cout << "Program 2 is the Month Program" << endl;
	cout << "Program 3 is the Iterate Program" << endl;
	cout << "Program 4 is the Average Program" << endl;
	cout << "Program 5 is the Reverse Array Program" << endl;
	cout << "Program 6 is the Ascending and Descending Program" << endl;
	
	cin >> programmer;
	do {
		switch (programmer) {

		case 1: program1();
			break;
		case 2: program2();
			break;
		case 3: program3();
			break;
		case 4: program4();
			break;
		case 5: program5();
			break;
		case 6: program6();
			break;
		case 7:
			cout << "This is the Program List" << endl;
			cout << "Program 1 is the Loop Program" << endl;
			cout << "Program 2 is the Month Program" << endl;
			cout << "Program 3 is the Iterate Program" << endl;
			cout << "Program 4 is the Average Program" << endl;
			cout << "Program 5 is the Reverse Array Program" << endl;
			cout << "Program 6 is the Ascending and Descending Program" << endl;
			break;
		}
		cout << "Do you want to choose a program again? (y/n)";
		char continuation;
		int resume = 0;
		
		while (resume == 0) {
			cin >> continuation;
			if (continuation == 'y') {
				cout << "What program do you want" << endl;
				cout << "You may also press 0 to exit" << endl;
				cout << "You may also press 7 to see the list" << endl;
				cin >> programmer;
				cout << endl;
				resume = 1;
			}
			else if (continuation == 'n') {
				programmer = 0;
				resume = 1;
			}
			else cout << "I'm not programmed to use other characters other than y and n.";
		}
		
		
		
	} while (programmer != 0);
	

	

}

