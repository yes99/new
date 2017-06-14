#include <cstring>
#include "CResearcher.h"

CResearcher::CResearcher()
{
	nSalary = 0;
}

CResearcher::CResearcher(CResearcher& _student)
{

	this->nSalary = _student.nSalary;
}

/*
CResearcher::~CResearcher()
{
if (pSalary)
delete[] pSalary;
}
*/

int CResearcher::GetSalary()
{
	return nSalary;
}

void CResearcher::SetSalary(int _nSalary)
{
	nSalary = _nSalary;
}
