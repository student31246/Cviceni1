#pragma once
#include <iostream>
#include <list>
#include "Subject.h"
using namespace std;

class Student
{
	list<Subject> subjects;

	void GetMarks();
	void PassedExams();
	const char* AverageMark();

public:
	void Enroll(Subject sub);
	void Score(SubjectType subject, bool credit);
	void Score(SubjectType subject, Mark mark);
	void PrintStudentInfo();
};

