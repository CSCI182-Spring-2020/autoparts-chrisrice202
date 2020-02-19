#pragma once
#include <iostream>
using namespace std;

class Autopart {
private:

public:
	int _PartNo = 0;
	string _PartDescription = "";
	int _PartMaker = 0;

	Autopart(int, string, int);

	void PrintPart();
	void setPartNo(int);
};

