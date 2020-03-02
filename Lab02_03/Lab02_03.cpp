#include <iostream>

using namespace std;

class Cylinder
{
public:
	//Constructor
	Cylinder() {
		this->diameter = 0;
		this->height = 0;
	}

	Cylinder(int diameter, int height) {
		this->diameter = diameter;
		this->height = height;
	}

	//Functions
	double Radius() {
		return diameter / 2;
	}
	double Area() {
		double radius = this->Radius();
		double base = 3.14 * radius * radius;
		double lateral = 2 * 3.14 * radius * this->height;
		return lateral + 2 * base;
	}

	double Volume() {
		double radius = this->Radius();
		return 3.14 * radius * radius * this->height;
	}

	//Setter and getter functions
	void SetDiameter(int diameter) {
		if (diameter > 0) {
			this->diameter = diameter;
		}
		else
		{
			this->diameter = 0;
		}
	}
	
	int GetDiameter() {
		return this->diameter;
	}

	void SetHeight(int height) {
		if (height > 0) {
			this->height = height;
		}
		else {
			this->height = 0;
		}
	}

	int GetHeight() {
		return this->height;
	}

private:
	int diameter;
	int height;
};

int main() {
	Cylinder c1;
	c1.SetDiameter(8);
	c1.SetHeight(20);
	cout << "Diameter : " << c1.GetDiameter() << " Height :" << c1.GetHeight() << endl;
	Cylinder c2;
	c1.SetDiameter(7);
	c1.SetHeight(10);
	cout << "Diameter : " << c1.GetDiameter() << " Height :" << c1.GetHeight() << endl;

	getchar();

	return 0;
}