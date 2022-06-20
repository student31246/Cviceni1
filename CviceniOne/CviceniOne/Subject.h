#pragma once

enum SubjectType
{
	Math, Literature, Physics, Chemistry, Movie, LazyDay, Drive, English, Spanish, Swimming, History, Czech,
	Biology, Ukranian, Russian, Romanian, Management, Accounting, Science, Geography, Economics, Art

};

enum Mark
{
	A, B, C, D, E, F
};

class Subject
{
	SubjectType type;
	int attempts;
	bool credit;
	Mark exam;

public:

	Subject() { this->attempts = 0; this->credit = false; this->exam = Mark::F; }
	Subject(SubjectType type):Subject() { this->type = type;}

	SubjectType GetType() { return this->type; }
	int GetAttempts() { return this->attempts; }

	bool GetCredit() { return this->credit; }
	void SetCredit(bool value) { this->credit = value; }

	Mark GetExam() { return this->exam; }
	void SetExam(Mark mark) { this->attempts++; this->exam = mark; }
};

