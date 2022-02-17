#include "Header.h"

class Rectangle {
	int row;
	int col;

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

	void Print() {

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


class Circle {
	int col;

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

	void Print() {

		int rad = col / 2;
		int w = rad;
		int l = rad * 1.5;
		int y, x;

		for (y = w; y >= -w; y -= 2) {
			for (x = -l; x <= l; x++) {

				int path = sqrt(pow(x, 2) + pow(y, 2));

				if (path == rad) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << "\n";

		}
	}

};