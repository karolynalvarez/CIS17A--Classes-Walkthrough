#include "Teacher.h"
using namespace std;


Teacher::Teacher(string name) : _name(name)
{
}


Teacher::~Teacher()
{
}

std::string Teacher::GetName()
{
	return _name;
}
