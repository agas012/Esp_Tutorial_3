#pragma once
#include <math.h>
#include "Box.h"
class ModGun
{
public:
	ModGun();
	~ModGun();
	void MakeSmall(Box& obj);
	void MakeBig(Box& obj);
	double Volumesqr(Box obj);
};

