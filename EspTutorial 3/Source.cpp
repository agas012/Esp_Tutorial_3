#include <iostream>
#include "Box.h"
#include "ModGun.h"

void main()
{
	Box box_1;
	Box box_2(10.0, 4.0, 5.0);

	std::cout << "(L,H,W): " << "(" << box_1.Get_length() << "," << box_1.Get_height() << "," << box_1.Get_width() << ")" << std::endl;

	std::cout << "(L,H,W): " << "(" << box_2.Get_length() << "," << box_2.Get_height() << "," << box_2.Get_width() << ")" << std::endl;

	//modificar valores publicos
	box_1.Print_Volume();
	box_1.Set_length(19.90);
	box_1.Print_Volume();
	box_1.Set_height(90.6);
	box_1.Print_Volume();
	box_1.Set_width(1212.0);
	box_1.Print_Volume();

	ModGun gun;
	std::cout << "(L,H,W): " << "(" << box_1.Get_length() << "," << box_1.Get_height() << "," << box_1.Get_width() << ")" << std::endl;
	gun.MakeSmall(box_1);
	std::cout << "(L,H,W): " << "(" << box_1.Get_length() << "," << box_1.Get_height() << "," << box_1.Get_width() << ")" << std::endl;
	box_1.Print_Volume();
	std::cout << "Mod volume= " << gun.Volumesqr(box_1) << std::endl;

	PrintBox(box_1);
}