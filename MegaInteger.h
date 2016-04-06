#ifndef MEGA_INTEGER
#define MEGA_INTEGER

#include "MegaNatural.h"
#include <string>

using namespace std;

class MegaInteger 
{
public:
	MegaInteger();
	MegaInteger(MegaNatural &ob);
	MegaInteger(MegaInteger &ob);
	MegaInteger(string);
	~MegaInteger();

	//Описание: модуль числа
	MegaInteger abs();
	//Описание: преобразование целого в натуральное
	MegaNatural toMegaNatural();
	string toString();
private:
	MegaNatural num;
	bool isNegative;
};

#include "MegaInteger.cpp"

#endif
