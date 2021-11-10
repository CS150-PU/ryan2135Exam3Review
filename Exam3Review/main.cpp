//	********************************************************************
//	File name:		main.cpp
//	Author:				CS, Pacific University
//	Date:					11/10/2021
//	Class:				CS-150
//	Purpose:			User specifies number of scores, enters scores, 
//								calculates and displayes average after dropping 
//								lowest score, the average dropping no scores, and
//								the standard deviation of all scores.
//	********************************************************************

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void inputScores (double scores[], int numScores);

double getTotal (const double scores[], int size);
double getLowest (const double scores[], int size);

double getAverage (const double scores[], int numScores);
double getStandardDeviation (const double scores[], int numScores);

void printClassScores (const double scores[], int numScores,
	int scoresPerLine, int widthPerScore);

/***********************************************************************
Function:			main

Description:	Obtains number of scores to be entered, calls functions
							inputScores, totalScores, and lowestScore then calculates
							average with lowest score dropped.

Parameters:		none

Returned:			EXIT_SUCCESS
***********************************************************************/

int main () {
	const int MAX_NUMBER_SCORES = 20;
	const int MAX_SCORE = 100;
	const int MIN_NUM_SCORES = 2;

	const int SCORES_PER_LINE = 4;
	const int WIDTH_PER_SCORE = 10;

	int numberScores = 0;

	double scores[MAX_NUMBER_SCORES];
	double totalScores;
	double lowestScore;

	do {
		cout << "Enter the number of homework scores:";
		cin >> numberScores;
	} while (numberScores < 1 || numberScores > MAX_NUMBER_SCORES);

	inputScores (scores, numberScores);

	totalScores = getTotal (scores, numberScores);

	lowestScore = getLowest (scores, numberScores);

	if (numberScores >= MIN_NUM_SCORES) {
		cout << "\nThe average with the lowest score dropped is: "
			<< (totalScores - lowestScore) / (numberScores - 1) << endl;
	}
	else {
		cout << "\nNot enough scores to drop the low score.  The average is: "
			<< (totalScores / numberScores) << endl;
	}

	cout << "The average without any scores dropped is "
		<< getAverage (scores, numberScores);
	cout << "\nThe standard deviation is: "
		<< getStandardDeviation (scores, numberScores) << endl;

	cout << "\nThe scores in the class are:\n";
	printClassScores (scores, numberScores, SCORES_PER_LINE,
		WIDTH_PER_SCORE);

	return EXIT_SUCCESS;
}

/***********************************************************************
Function:			inputScores

Description:	user enters specified number of values

Parameters:		scores    - array to store scores
							numScores - number of scores to enter

Returned:			None
***********************************************************************/
void inputScores (double scores[], int numScores) {
	for (int i = 0; i < numScores; ++i) {
		do {
			cout << "Enter score number " << i + 1 << ": ";
			cin >> scores[i];

		} while (scores[i] < 0 || scores[i] > 100);
	}
}

/***********************************************************************
Function:			getTotal

Description:	user enters specified number of values

Parameters:		scores - array to store scores
							size   - number of viable entries in array

Returned:			sum of the scores in the array
***********************************************************************/
double getTotal (const double scores[], int size) {
	double scoresTotal = 0;

	for (int i = 0; i < size; i++) {
		scoresTotal += scores[i];
	}

	return scoresTotal;
}

/***********************************************************************
Function:			getLowest

Description:	returns the smallest value in the array

Parameters:		scores - array to store scores
							size   - number of viable entries in array

Returned:			the lowest score in array
***********************************************************************/
double getLowest (const double scores[], int size) {
	double lowestScore = scores[0];

	for (int i = 1; i < size; ++i) {
		if (scores[i] < lowestScore) {
			lowestScore = scores[i];
		}
	}

	return lowestScore;
}

/***********************************************************************
Function:			getAverage

Description:	Prints all of of the scores in the class

Parameters:		scores    - array to store scores
							numScores - number of valid scores

Returned:			class average
***********************************************************************/
double getAverage (const double scores[], int numScores) {
	// Insert your code here
	return 0;
}

/***********************************************************************
Function:			getStandardDeviation

Description:	computes the standard deviation of the socrs

Parameters:		scores   - array to store scores
							numScores - number of valid scores

Returned:			class standard deviation
***********************************************************************/
double getStandardDeviation (const double scores[], int numScores) {

	// Insert your code here
	return 0;
}


/***********************************************************************
Function:			printClassScores

Description:	prints all of of the scores in the class with a certain
							number of scores printed per line

Parameters:		scores				- array to store scores
							numScores			- number of valid scores
							scoresPerLine - number of scores to print on each line
							widthPerScore - setw parameter for each score

Returned:			none
***********************************************************************/
void printClassScores (const double scores[], int numScores,
	int scoresPerLine, int widthPerScore) {
	// Insert your code here
}