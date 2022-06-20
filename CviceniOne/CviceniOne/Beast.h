#pragma once
#include <iostream>
using namespace std;
class Beast
{
	int stomache;
	int age;

public:
	Beast() { stomache = 1; age = 0; }

	int Live() { return stomache > 0; }
	int Eat(int food);
	int Poop(int volume);
	void GetOlder() { age++; }
	void Print() { cout << "Age: " << age << " " << "Stomache: " << stomache << endl; }
};
