#include "point.h"

point::point()
{
	x = 0;
	y = 0;
};
point::point(float xcoor, float ycoor)
{
	x = xcoor;
	y = ycoor;
};
void point::setX(float xcoor)
{
	x = xcoor;
};
void point::setY(float ycoor)
{
	y = ycoor;
};
float point::getX()
{
	return x;
};
float point::getY()
{
	return y;
};
void point::display()
{
	cout << "Your coordinates are: " << x << " , " << y << endl;
};
float point::distance(point num2)
{
	float distance;
	distance = pow((pow(x, 2) - pow(num2.x, 2)) + (pow(y, 2) - pow(num2.y, 2)), 0.5);
	return distance;
};
point::~point()
{};