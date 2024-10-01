#ifndef CYLINDER_H
#define CYLINDER_H

class cylinder
{

public:
	
	//Constructor and destructor 
	cylinder();
	~cylinder();

	//setters
	void setRadius(double r);
	void setHeight(double h);

	//getters
	double getRadius();
	double getHeight();
	
	double calculateVolume();
	double calculateSurfaceArea();

private:
	double Height;
	double Radius;
	double pi = 3.1459;

};

#endif