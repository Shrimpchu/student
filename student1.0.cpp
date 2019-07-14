#include "pch.h"
#include "标头.h"

student::student()
{
	name = "无名";
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
	// TODO: 在此处插入 return 语句
}

string  student::getname() const
{
	return name;
	// TODO: 在此处插入 return 语句
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
	os << "\n姓名：" << stu.name << "\n班级：" << stu.classes << "\n年级：" << stu.grade << "\n级别：" << stu.level << "\n学校：" << stu.school;
	return os;
	// TODO: 在此处插入 return 语句
}
