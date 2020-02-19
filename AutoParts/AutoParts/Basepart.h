#pragma once
#include <iostream>

using namespace std;

class Basepart
{
private:
	

public:
	int _PartNo = 0;
	Basepart(int PartNo) {
		_PartNo = PartNo;
		cout << "Basepart constructor: " << _PartNo << endl;
	}

	virtual ~Basepart() {

		cout << "Basepart destructor: " << _PartNo << endl;

	}

};

