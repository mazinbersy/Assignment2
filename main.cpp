#include <iostream>
#include "point.h"
using namespace std;

point center(point*& C, int n)
{
	float sumx = 0; float sumy = 0; point center;
	for (int i = 0; i < n; i++)
	{
		sumx += C[i].getX();
		sumy += C[i].getY();
	}
	center.setX(sumx / n);
	center.setY(sumy / n);
	return center;
}

void closest(point*& A, int sizeA, point*& B, int sizeB, point p)
{
	float distance1, distance2;
	distance1 = pow((pow(p.getX() - center(A, sizeA).getX(), 2)) + (pow(p.getY() -  center(A, sizeA).getY(), 2)), 0.5);
	distance2 = pow((pow(p.getX() - center(B, sizeB).getX(), 2)) + (pow(p.getY() - center(B, sizeB).getY(), 2)), 0.5);
	if (distance1 > distance2)
	cout << "Point belongs to cluster B" << endl;
	if (distance1 < distance2)
		cout << "Point belongs to cluster A" << endl;
	if(distance1==distance2)
		cout << "Identical distances from both clusters" << endl;
}

int main()
{
	point* A; point* B; point* P; int n1, n2;
	cout << "ENTER SIZE OF CLUSTER A: ";
	cin >> n1;
	A = new point[n1];
	cout << "ENTER SIZE OF CLUSTER B: ";
	cin >> n2;
	B = new point[n2];
	srand(time(0));
	for (int i = 0; i < n1; i++)
	{
		A[i].setX(rand() % 19 + 71);
		A[i].setY(rand() % 19 + 71);
	}
	for (int i = 0; i < n2; i++)
	{
		B[i].setX(rand() % 19 + 21);
		B[i].setY(rand() % 19 + 21);
	}
	P = new point[20];
	for (int i = 0; i < 20; i++)
	{
		P[i].setX(rand() %94 + 6);
		P[i].setY(rand() %94 + 6);
		cout << "POINT "<<i+1<<": ";  closest(A, n1, B, n2, P[i]);
	}











	return 0;
}
