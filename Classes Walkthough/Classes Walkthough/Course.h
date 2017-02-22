#pragma once
#include <string>
#include "Student.h"
#include "Teacher.h"

class Course
{ 
private:
	std::string _name;
	std::string _description;
	Student _students[10];
	Teacher _teacher;
public:
	Course(std::string name, std::string description, Teacher teacher);
	~Course();
	bool EnrollStudent (Student newStudent, int position);
	std::string GetClassInfo();
};

