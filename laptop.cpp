#include "laptop.h"

void Laptop::setSizeDisplay(double sizeDisplay)
{
	this->sizeDisplay = sizeDisplay;
}

double Laptop::getSizeDisplay(void) const
{
	return sizeDisplay;
}

void Laptop::setTypeDisplay(string typeDisplay)
{
	this->typeDisplay = typeDisplay;
}

string Laptop::getTypeDisplay(void) const
{
	return  typeDisplay;
}

void Laptop::setPowerCPU(double powerCPU)
{
	this->powerCPU_ = powerCPU;
}

double Laptop::getPowerCPU(void) const
{
	return powerCPU_;
}

void Laptop::setSizeRAM(int sizeRAM)
{
	this->sizeRAM_ = sizeRAM;
}

int Laptop::getSizeRAM(void) const
{
	return sizeRAM_;
}

void Laptop::setName(string name)
{
	this->name_ = name;
}

string Laptop::getName(void) const
{
	return name_;
}

Laptop::Laptop()
{
	powerCPU_ = 3.4;
	sizeRAM_ = 16;
	name_ = "ASUS VivoBook";
	sizeDisplay = 15.6;
	typeDisplay = "IPS";
	sizeStorage = 512;
	nameCPU = " Intel Core i7-1365G7 ";

	cout << "Constructor 1 executed" << endl;
}

Laptop::Laptop(double powerCPU, int sizeRAM, string name,
	double sizeDisplay,string typeDisplay)
{
	this->powerCPU_ = powerCPU;
	this->sizeRAM_ = sizeRAM;
	this->name_ = name;
	this->sizeDisplay = sizeDisplay;
	this->typeDisplay = typeDisplay;
	
	cout << "Constructor 2 executed" << endl;
}

Laptop::~Laptop()
{
	cout << "Destructor executed" << endl;
}


