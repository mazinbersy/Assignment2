#include <iostream>
#include <cmath>
using namespace std;


class point {

private:
	float x;
	float y;

public:
	point();
	point(float, float);
	void setX(float);
	void setY(float);
	float getX();
	float getY();
	void display();
	float distance(point);
	~point();













};
