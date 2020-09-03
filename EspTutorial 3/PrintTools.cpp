#include <iostream>
#include "Box.h"

void PrintBox(Box obj)
{
	std::cout << "(L,H,W): " << "(" << obj.Get_length() << "," << obj.Get_height() << "," << obj.Get_width() << ")" << std::endl;
	obj.Print_Volume();
}