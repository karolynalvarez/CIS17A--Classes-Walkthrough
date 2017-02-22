#include "Course.h"
#include <string>
using namespace std;


Course::Course(string name, string description, Teacher teacher) : _name(name), _description(description), _teacher(teacher)
{
}


Course::~Course()
{
}

bool Course::EnrollStudent(Student newStudent, int position) {
	if (position <= 9 && _students[position].GetName() == "Null") {
		_students[position] = newStudent; 
		return true;
	}
	_students[position] = newStudent;
	return false;

}

std::string Course::GetClassInfo()
{
	string info = "Course Information for " + _name + "\n";
	info += _description; +"\n";
	info += "-------------------";
	info += "\n";
	for (auto student : _students) {
	

		
		info += student.GetName() + "\n";
	}
	return info;
}
