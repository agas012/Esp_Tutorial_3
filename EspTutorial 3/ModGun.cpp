#include "ModGun.h"

ModGun::ModGun()
{
}

ModGun::~ModGun()
{
}

void ModGun::MakeSmall(Box& obj)
{ 
	obj.Set_height(obj.Get_height() * 0.5);
	obj.Set_length(obj.Get_length() * 0.5);
	obj.Set_width(obj.Get_width() * 0.5);
}

void ModGun::MakeBig(Box& obj)
{
	obj.Set_height(obj.Get_height() * 2);
	obj.Set_length(obj.Get_length() * 2);
	obj.Set_width(obj.Get_width() * 2);
}

double ModGun::Volumesqr(Box obj)
{
	return pow(obj.volume, 2);
}
