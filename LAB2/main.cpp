/*
	Imane Jourji
	Computer Science Fall 2024
	Due :Tuesday September 17, 2024 at 11:59pm
	Lab 2 : Output and classes 
	This lab's goal is to get you familiar output to the command prompt using C++
*/

#include<iostream>
#include "cylinder.h"


int main()
{
	cylinder c;
	c.setRadius(5);
	c.setHeight(9);
	
	std::cout << "the volume of the cylinder is:" << c.calculateVolume() << std::endl;
	std::cout << "the surface area of the cylinder is:" << c.calculateSurfaceArea() << std::endl;
	
	return 0;
}