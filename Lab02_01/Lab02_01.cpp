#include <iostream>

using namespace std;

class Cylinder
{
public:
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

	int diameter;
	int height;
};

int main() {
	Cylinder c1;
	cout << "Area : " << c1.Area() << " Volume : " << c1.Volume() << endl;
	Cylinder c2;
	c2.diameter = 7;
	c2.height = 10;
	cout << "Area :" << c2.Area() << "Volume :" << c2.Volume() << endl;

	getchar();

	return 0;
}