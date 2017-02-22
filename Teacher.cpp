#include "Teacher.h"
using namespace std;

Teacher::Teacher()
{
	_name = "Null";
}

Teacher::Teacher(std::string name) : _name(name)
{
}

Teacher::~Teacher()
{
}

std::string Teacher::GetName()
{

	return _name;
}
