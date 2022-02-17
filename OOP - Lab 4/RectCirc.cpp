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

		int r = col / 2;
		const int width = r;
		const int length = r * 1.5;

		for (int y = width; y >= -width; y -= 2) {
			for (int x = -length; x <= length; x++) {

				int pth = sqrt(pow(x, 2) + pow(y, 2));
				if (pth == r) cout << "*";
				else cout << " ";

			}
			cout << "\n";
		}
	}

};