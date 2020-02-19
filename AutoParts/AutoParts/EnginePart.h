#pragma once
#include <iostream>
#include "BasePart.h"
#include <string>
#include "AutoPart.h"

using namespace std;

class EnginePart : Autopart
{

private:


public:
	int _EngineNo = 0;

	EnginePart(int EngineNo, int part, string desc, int maker) : Autopart(part, desc, maker) {

		_EngineNo = EngineNo;
		cout << "EnginePart constructor: " << _EngineNo << endl;

	}

	virtual ~EnginePart() {

		cout << "Enginepart destructo: " << _EngineNo << endl;

	}

	void PrintPart();

};

