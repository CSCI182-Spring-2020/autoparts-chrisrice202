#pragma once
#include <iostream>
#include "Autopart.h"
#include "BasePart.h"

using namespace std;

Autopart::Autopart(int partNum, string partDesc, int maker) {
	_PartNo = partNum;
	_PartDescription = partDesc;
	_PartMaker = maker;
}

void Autopart::PrintPart() {

	cout << _PartNo << "\t" << _PartDescription << "\t" << _PartMaker << endl;

}

void Autopart::setPartNo(int x) {

	_PartNo = x;

}