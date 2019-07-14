#pragma once
#include <iostream>
#include<string>
#ifndef stud
#define stud
using namespace std;
class student
{
private:
	string name;
	int classes;
	int grade;
	char level;
	
public:
	student();
	student(const char * n, int c, int g, char l);
	~student();
	string getname(); string getname() const;
	int getclass(); int getclass()const;
	int getgrade(); int getgrade()const;
	char getlevel(); char getlevel()const;

	friend const ostream& operator<<(ostream &os, student stu);
	
};
#endif // !stud
