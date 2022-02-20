#include "Header.h"

class Shape {
public:
	virtual void Draw() = 0 {
	}
}; 

class Rectangle: public Shape {
	int row=0;
	int col=0;

public:

	void setRow(int a) {
		row = a;

	}

	void setCol(int a) {
		col = a;

	}

	void Area() {
		int area = row * col;

		cout << "Rectangle Area: " << area << endl;
	}

	void Draw() {

		char ch = '*';
		int i, j;
		for (i = 1; i <= row; i++) {
			for (j = 1; j <= col; j++) {
				if (i == 1 || i == row || j == 1 || j == col) {
					cout << ch;
				} else {
					cout << " ";
				}
			}
			cout << "\n";
		}
	}

};


class Circle :public Shape {
	int col=0;

public:

	void setCol(int a) {
		col = a;
	}

	void Area() {

		//find radius
		int rad = col / 2;

		//find area
		double area = 3.14 * pow(rad, 2);
		
		cout << "Circle Area: " << area << endl;
	}

	void Draw() {

		int rad = col / 2;
		int w = rad;
		int l = rad * 1.5;
		int y, x;

		char ch = '*';

		for (y = w; y >= -w; y -= 2) {
			for (x = -l; x <= l; x++) {

				int path = sqrt(pow(x, 2) + pow(y, 2));

				if (path == rad) {
					cout << ch;
				}
				else {
					cout << " ";
				}
			}
			cout << "\n";

		}
	}

};

class Vehicle : public Shape {
public:
	virtual void Drive() =0{
	}
};

class BMW :public Vehicle {

public:

	void Draw() {
		cout << "BMW" << endl;
		cout << "\t           ** * * * * *" << endl;
		cout << "\t         *  *       *   *" << endl;
		cout << "\t       *    *       *     *" << endl;
		cout << "\t*  *  * *  *  *  * * * *  *  *  * *" << endl;
		cout << "\t*                                 *" << endl;
		cout << "\t* *  * * *            * * *       *" << endl;
		cout << "\t    *  *  *  *  * *  *  *  *  *  *" << endl;
		cout << "\t      *  *             *  *" << endl;

	}

	void Drive() {
		cout << "Driving a BMW\n" << endl;
	}
};

class MAZDA :public Vehicle {

public:

	void Draw() {
		cout << "MAZDA" << endl;
		cout << "\t       * *  * * *" << endl;
		cout << "\t    * *       *    *" << endl;
		cout << "\t  *   *       *     *" << endl;
		cout << "\t* * * *  *  *  * ** *  **  * **" << endl;
		cout << "\t*                              *" << endl;
		cout << "\t*                               *" << endl;
		cout << "\t* ** * * *             *  *     *" << endl;
		cout << "\t   *       *  *  *   *      * * " << endl;
		cout << "\t     *   *             *  *" << endl;

	}

	void Drive() {
		cout << "Driving a Mazda" << endl;
	}
};