#include <iostream>
#include <string>
using namespace std;

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0) {			// sets x, y to a,b
		x = a;
		y = b;
	}
	void showmove() const;						 // shows current x, y values
	Move add(const Move &m) const;			// this function adds x of m to x of invoking object to get new x,
											// adds y of m to y of invoking object to get new y,creates a new
											// move object initialized to new x, y values and returns it.
	void reset(double a = 0, double b = 0);		// resets x,y to a, b
};

void Move::showmove() const {
	cout << "x = " << x << ", y = " << y << endl;
}

Move Move::add(const Move &m) const {
	double a = x + m.x;
	double b = y + m.y;
	return Move(a, b);
}

void Move::reset(double a, double b){
	x = a;
	y = b;
}

void main(){
	Move p1(1, 2);
	Move p2(3, 4);
	Move p3 = p1.add(p2);
	p2.reset();

	p1.showmove();				//x should be 1, y should be 2
	p2.showmove();				//x should be 0, y should be 0
	p3.showmove();				//x should be 4, y should be 6

	p1.reset(1, 1);
	p1.showmove();				//x should be 1, y should be 1
}