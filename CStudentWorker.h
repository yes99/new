#pragma once
#include "CStudent.h"


class CStudentWorker : public CStudent
{
private:

	int nSalary;

public:
	CStudentWorker();
	CStudentWorker(CStudentWorker& _student);
	~CStudentWorker();

	int GetSalary();

	void SetSalary(int _pSalary);

};