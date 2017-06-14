#pragma once

#include "CPerson.h"


class CResearcher : public CPerson
{
private:
	int nSalary;
	

public:
	CResearcher();
	CResearcher(CResearcher& _student);
	~CResearcher();


	int GetSalary();
	

	void SetSalary(int _nSalary);

};