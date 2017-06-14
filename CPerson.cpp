#include <cstring>
#include "CPerson.h"

CPerson::CPerson()
{
	pName = NULL;
}

CPerson::CPerson(CPerson& _student)
{
	this->pName = new char[strlen(_student.pName) + 1]();
	strcpy_s(this->pName, strlen(_student.pName) + 1, _student.pName);
}

CPerson::~CPerson()
{
	if (pName)
		delete[] pName;
}

char* CPerson::GetName()
{
	return this->pName;
}

void CPerson::SetName(char* _pName)
{
	if (pName)
		delete[] pName;

	this->pName = new char[strlen(_pName) + 1]();
	strcpy_s(this->pName, strlen(_pName) + 1, _pName);
}
