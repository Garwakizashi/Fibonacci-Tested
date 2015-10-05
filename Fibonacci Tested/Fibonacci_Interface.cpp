/**
Fibonnaci_Interface.cpp
Purpose: Run a procedure to calculate the fibonacci sequence between two numbers
@author Gar Diu
@version 1.0 24/09/2015
*/

#include <iostream>
#include <vector>
#include <string>
#include "Fibonacci.h"
#include "FibonacciCalculator.h"
#include "Utility_Functions.h"

using namespace std;



/**
* Use FibonaciCalculator Class  to print sequence
* @param integer start the initial integer.
* @param integer end the ending number of sequence.
*/
void useFibonacciCalculator(int start, int end) {
	Classes::FibonacciCalculator Calculator(start, end);
	UtilityFunctions::printAllVectorIntElements(Calculator.getSequence());
};

/**
* Recursive function to display fibonacci sequence number
*
* @param integer start the initial integer.
* @param integer end the ending number of sequence.
* @param integer next the next proposed number of sequence after start.
*
* @return cout fibonacci numbers
*/
void calculate(int start, int end, int next = NULL) {
	int tempNum;
	if (start > end)
		return;

	if (next == NULL)
		next = start + 1;

	cout << start << " ";
	tempNum = next;
	next += start;
	calculate(tempNum, end, next);
};

/**
* Procedure for calculating the fibonacci sequence between two numbers specified by user.
*/
int startProcedure() {
	string choice;
	int startNumber, endNumber;
	cout << "Enter a starting and ending number to display all fibonacci numbers between them" << endl << "Starting number: ";
	cin >> startNumber;
	cout << endl << "Ending Number: ";
	cin >> endNumber;
	cout << "Use class? Y/N" << endl;
	cin >> choice;

	if (choice == "Y")
		useFibonacciCalculator(startNumber, endNumber);
	else
		calculate(startNumber, endNumber, NULL);

	cout << "END" << endl << "Do you want to try again? Y/N" << endl;
	cin >> choice;

	if (choice == "Y")
		startProcedure();
	else
		return 1;
};
