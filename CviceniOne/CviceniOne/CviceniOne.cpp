// CviceniOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Beast.h"
#include "Student.h"
#include "SubjectExtensions.h"
using namespace std;

int main()
{
	Student a;
	a.Enroll(Math);
	a.Enroll(Literature);
	a.Enroll(Physics);
	a.Enroll(Chemistry);
	a.Enroll(Movie);

	a.Score(Math, true);
	a.Score(Physics, true);
	a.Score(Movie, true);

	a.Score(Math,A);
	a.Score(Literature,A);
	a.Score(Physics,A);
	a.Score(Movie,E);

	a.PrintStudentInfo();
}
