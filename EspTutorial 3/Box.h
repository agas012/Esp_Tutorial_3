#pragma once
#include <iostream>

class Box
{
public:
	//constructor
	Box();
	Box(double len, double hei, double wid);
	//destructur
	~Box();

	//inline functions
	inline void Calc_Volume()
	{
		volume = length * height * width;
	}
	inline void Print_Volume()
	{
		std::cout << "Volume= " << volume <<std::endl;
	}
	inline void Set_length(double len)
	{
		length = len;
		Calc_Volume();
	}
	inline void Set_height(double hei)
	{
		height = hei;
		Calc_Volume();
	}
	inline void Set_width(double wid)
	{
		width = wid;
		Calc_Volume();
	}
	inline double Get_length()
	{
		return length;
	}
	inline double Get_height()
	{
		return height;
	}
	inline double Get_width()
	{
		return width;
	}

	friend class ModGun;
	friend void PrintBox(Box obj);

private:
	double volume;
	double length, height, width;
};

