#pragma once

class CPerson
{
private:
	
	char* pName;

public:
	CPerson();
	CPerson(CPerson& _student);
	~CPerson();

	char* GetName();
	

	void SetName(char* _pName);

};