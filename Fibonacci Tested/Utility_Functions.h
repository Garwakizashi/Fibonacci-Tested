#define Utility_Functions_H

#include <iostream>
#include <vector>

using namespace std;

namespace UtilityFunctions {

	/**
	* function to print all vector <int> elements
	* @param vectorInt the vector
	*/
	void printAllVectorIntElements(vector<int> vectorInt) {
		for (auto i = vectorInt.begin(); i != vectorInt.end(); ++i)
			cout << *i << ' ';
	};
}