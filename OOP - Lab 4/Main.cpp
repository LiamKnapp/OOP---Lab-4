//OOP LAB 4
//Authors: Ilyas, Liam, Tony

#include "Header.h"
#include "RectCirc.cpp"

void Draw(Shape* shape) {
    shape->Draw();

}

int main(void)
{

    /*  RECTANGLE STUFF  */
    Rectangle r;
    r.setCol(6);
    r.setRow(4);
    //r.Print();
    Draw(&r);
    r.Area();

    /*  CIRCLE STUFF  */
    Circle c;
    c.setCol(6);
    //c.Print();
    Draw(&c);
    c.Area();

    /* BMW STUFF*/
    BMW b;

    Draw(&b);
    b.Drive();


    /* MAZDA STUFF*/
    MAZDA m;
    Draw(&m);
    m.Drive();

}