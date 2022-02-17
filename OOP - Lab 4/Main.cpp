//OOP LAB 4
//Authors: Ilyas, Liam, Tony

#include "Header.h"
#include "RectCirc.cpp"

int main(void)
{

    /*  RECTANGLE STUFF  */
    Rectangle r;
    r.setCol(6);
    r.setRow(4);
    r.Print();
    r.Area();

    /*  CIRCLE STUFF  */
    Circle c;
    c.setCol(6);
    c.Print();
    c.Area();

}