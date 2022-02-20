//OOP LAB 4
//Authors: Ilyas, Liam, Tony

#include "Header.h"
#include "RectCirc.cpp"

//Polymorphic Draw Function, draws any shape or vehicle.
void Draw(Shape* shape) {
    shape->Draw();

}
//Polymorphic Drive Function, drives any vehicle.
void Drive(Vehicle* vehicle) {
    vehicle->Drive();
}

int main(void)
{
    Shape* polymorphicshape = NULL;
    Vehicle* polymorphicvehicle = NULL;

    /*  RECTANGLE STUFF  */
    Rectangle rectangle;
    rectangle.setCol(6);
    rectangle.setRow(4);
    polymorphicshape = &rectangle;
    Draw(polymorphicshape);
    rectangle.Area();

    /*  CIRCLE STUFF  */
    Circle circle;
    circle.setCol(6);
    polymorphicshape = &circle;
    Draw(polymorphicshape);
    circle.Area();

    /* BMW STUFF*/
    BMW bmw;
    polymorphicshape = &bmw;
    polymorphicvehicle = &bmw; 
    Draw(polymorphicshape); 
    Drive(polymorphicvehicle);   

    /* MAZDA STUFF*/
    MAZDA mazda;
    polymorphicshape = &mazda;
    polymorphicvehicle = &mazda;
    Draw(polymorphicshape);
    Drive(polymorphicvehicle); 
   
}