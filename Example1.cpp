//Program: GradeCalculator.cpp
//Programmer: Ian A
//Date: February 24, 2017
#include<iostream>

using namespace std;

int main()
{
	//Define variables
	double min(100), max(0), average(0), score, count(0);

	do {
		//Prompt teacher for test grade
		cout << "Enter the students grade: ";
		cin >> score;

		//Updates values
		if (score < 0 || score > 100) 
		{
			if (score != -1) {
				cout << "Thats an invalid grade!" << endl;
			}
		}
		else 
		{
			count++;
			average += score;
			if (score > max) {
				max = score;
			}
			if (score < min) {
				min = score;
			}
		}
	} while (score != -1);

	//Calculate the average
	average /= count;

	//Displays results
	cout << "The average is: " << average << endl;
	cout << "The min is: " << min << endl;
	cout << "The max is: " << max << endl;

	//Pauses program before termination
	system("pause");
	return 0;
}