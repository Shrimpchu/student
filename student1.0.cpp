#include "pch.h"
#include "��ͷ.h"

student::student()
{
	name = "����";
	classes = 0;
	grade = 0;
	level = EOF;
	
}

student::student(const char * n, int c, int g, char l)
{
	name = n;
	classes = c;
	grade = g;
	level = l;
	
}

student::~student()
{

}

string  student::getname()
{
	return name;
	// TODO: �ڴ˴����� return ���
}

string  student::getname() const
{
	return name;
	// TODO: �ڴ˴����� return ���
}

int student::getclass()
{
	return classes;
}

int student::getclass() const
{
	return classes;
}

int student::getgrade()
{
	return grade;
}

int student::getgrade() const
{
	return grade;
}

char student::getlevel()
{
	return level;
}

char student::getlevel() const
{
	return level;
}

const ostream & operator<<(ostream & os, student stu)
{
	os << "\n������" << stu.name << "\n�༶��" << stu.classes << "\n�꼶��" << stu.grade << "\n����" << stu.level << "\nѧУ��" << stu.school;
	return os;
	// TODO: �ڴ˴����� return ���
}
