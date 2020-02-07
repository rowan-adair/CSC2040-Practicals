#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
public:
	void compute_area() { area = width * height; }
	void compute_perimeter() { perim = 2 * width + 2 * height; }
	void read_shape_data() {
		cout << "Enter width of the rectangle: ";
		cin >> width;
		cout << "Enter height of the rectangle: ";
		cin >> height;
	}
private:
	int width, height;
};

