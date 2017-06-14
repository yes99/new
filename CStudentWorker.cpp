#include <cstring>
#include "CStudentWorker.h"

CStudentWorker::CStudentWorker()
{
	nSalary = 0;
}

CStudentWorker::CStudentWorker(CStudentWorker& _student)
{

	this->nSalary = _student.nSalary;
}

/*
CStudentWorker::~CStudentWorker()
{
	if (pSalary)
		delete[] pSalary;
}
*/

int CStudentWorker::GetSalary()
{
	return nSalary;
}

void CStudentWorker::SetSalary(int _nSalary)
{
	nSalary = _nSalary;
}
