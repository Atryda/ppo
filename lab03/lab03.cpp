#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Point {
	public:
		int x;
		int y;
		
		Point() {
			cout << "Point has been created." << endl;
		}
		
		Point(int x, int y) {
			this->x = x;
			this->y = y;
			cout << "Point [" << this->x << ", " << this->y << "] has been created." << endl;
		}
		
		~Point() {
			cout << "Point [" << this->x << ", " << this->y << "] has been deleted." << endl;
		}
		
		void movePoint(int xAxisShift, int yAxisShift) {
			this->x += xAxisShift;
			this->y += yAxisShift;
		}
};
/*
class Circle {
	public:
		Point center;
		int radius;
		
		Circle(Point center, int radius) {
			this->center = center;
			this->radius = radius;
		}
		
		void getCoordinates() {
			cout << "x: " << this->center.x << endl << "y: " << this->center.y << endl;
		}
};
*/
class Square {
	public:
		int range;
		Point a;
		Point b;
		Point c;
		Point d;
		Square(Point a,Point b,Point c,Point d, int range) {
			this->a = a;
			this->b = b;
			this->c = c;
			this->d = d;
			this->range = range;
		}
	void getCoordinates(){
		cout << "x: " << this->a.x << endl << "y: " << this->a.y << endl;
		cout << "x: " << this->b.x << endl << "y: " << this->b.y << endl;
		cout << "x: " << this->c.x << endl << "y: " << this->c.y << endl;
		cout << "x: " << this->d.x << endl << "y: " << this->d.y << endl;
	}
};

int main() {
	srand(time(NULL));
	
	int inputX = 0, inputY = 0;
	int inputRange = 2;
	int r=(rand()% 10);
	int e=(rand()% 10);
	Point a = Point(e, r);;
	Point b = Point(e + inputRange, r);;
	Point c = Point(e, r + inputRange );;
	Point d = Point(e + inputRange , r + inputRange);;
	Square s = Square(a,b,c,d, inputRange);
	
	//a.Point.movePoint(rand() % 10, rand() % 10);
	s.getCoordinates();
	
	return 0;
}

