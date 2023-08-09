// ConsoleApplication.c : This file contains the 'main' function. Program execution begins and ends there.

#include <stdio.h>

// Development versions
// 1. Input for numbers and basic addition
// 2. Input for operators
// 3. Transition to doubles instead of integers 
// 4. Edge case testing

int main()
{
	float firstNum;
	float secondNum;
	double result = 0.1234567;
	double roundedResult;
	char operator;

	// Prompt for user input for firstNum

	// Prompt for user input for secondNum

	// Propmt user for operator

	// Combine first and second numbers using operator

	// -- Display result -- 
	// Revert rounding on the result number
	// This is due to using "%.6f"
	roundedResult = round(result * 1000000) / 1000000;
	// Print the result to the millionths place (0.123456)
	printf("%.6f", roundedResult);

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
