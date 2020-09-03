#include "Box.h"

Box::Box()
{
	length = 0;
	width = 0;
	height = 0;
	Calc_Volume();
}

Box::Box(double len, double hei, double wid)
{
	length = len;
	height = hei;
	width = wid;
	Calc_Volume();
}

Box::~Box()
{
}
