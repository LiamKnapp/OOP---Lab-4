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

		cout << "Area: " << area << endl;
	}

	void Print() {

		char ch = '*';
		int i, j;
		for (i = 1; i <= row; i++)
		{
			for (j = 1; j <= col; j++)
			{
				if (i == 1 || i == row || j == 1 || j == col)
				{
					cout << ch;
				}
				else
				{
					cout << " ";
				}
			}
			cout << "\n";
		}
	}

};