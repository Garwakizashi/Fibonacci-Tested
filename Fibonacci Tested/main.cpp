/**
* main.cpp
* Purpose: Display the fibonacci sequence between two numbers. 
* This is a quick experiment with using boost framework to be more accustomed with unit testing in C++
*
* @author Gar Diu
* @version 1.0 24/09/2015
*/
#include <iostream>
#include "Fibonacci.h"


using namespace std;
int main(){

	cout << "Starting Fibonacci Procedure" << endl << endl;
	cout << "The Fibonacci Sequence is the series of numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... The next number is found by adding up the two numbers before it." << endl << endl;

	startProcedure();

	system("PAUSE");
}
