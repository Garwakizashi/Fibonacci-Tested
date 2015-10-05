#define FibonacciCalculator_H
#include <vector>
using namespace std;

namespace Classes{

	/**
	* Use of class to get fibonacci numbers
	*
	* @param start the initial integer.
	* @param end the ending number of sequence.
	* @param next the next proposed number of sequence after start.
	*
	*/
	class FibonacciCalculator {
	private:
		int start;
		int end;
		vector<int> sequence;

		/**
		* Recursive function to calculate the fibonacci sequence and store it in the private vector property:
		* @param one F(N-2)
		* @param two F(N-1)
		*/
		void calculate(int one, int two) {
			int tempNum;
			if (one > end)
				return;

			if (two == NULL)
				two = one + 1;

			sequence.push_back(one);
			tempNum = two;
			two += one;
			calculate(tempNum, two);
		};
	public:
		/**
		* Constructor, set start and end values of the range
		* @param fromValue starting value
		* @param toValue ending value
		*/
		FibonacciCalculator(int fromValue, int toValue) {
			start = fromValue;
			end = toValue;
		};

		/**
		* function to get fibonacci sequence, uses calculate() to get sequence if sequence is empty.
		* @return sequence vector<int> vector containing array of the fibonacci numbers
		*/
		vector<int> getSequence() {
			if (sequence.empty())
				calculate(start, NULL);

			return sequence;
		};

		int getStart() {
			return start;
		};
		
		int getEnd() {
			return end;
		};
	};
}