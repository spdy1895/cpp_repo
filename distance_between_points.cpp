#include <iostream>
#include <math.h>
int main(int argc, char **argv)
{

	double distance, x1, y1, x2, y2;

	std::cout << "enter the coordinates (x,y) of point1:" << std::endl;
	std::cin >> x1 >> y1;
	std::cout << "enter the coordinated (x,y) of point2:" << std::endl;
	std::cin >> x2 >> y2;
	distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	std::cout << "the distance between the two points (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is:" << distance << std::endl;

	return 0;
}
