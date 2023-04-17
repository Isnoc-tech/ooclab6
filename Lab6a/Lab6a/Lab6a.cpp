#include "RectangleX.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main()
{
    double r;
    double sL, sW, lL, lW;

    double greenArea;

    Circle circle1;
    RectangleX rectangleX1, rectangleX2;

    cout << "Enter the Radius: ";
    cin >> r;

    cout << "Enter the Length of Small Rectangle: ";
    cin >> sL;

    cout << "Enter the Width of Small Rectangle: ";
    cin >> sW;

    cout << "Enter the Length of Large Rectangle: ";
    cin >> lL;

    cout << "Enter the Width of Large Rectangle: ";
    cin >> lW;

    circle1.setRadius(r);
    circle1.getRadius();

    rectangleX1.setLength(sL);
    rectangleX1.setWidth(sW);

    rectangleX1.getLength();
    rectangleX1.getWidth();

    rectangleX2.setLength(lL);
    rectangleX2.setWidth(lW);

    rectangleX2.getLength();
    rectangleX2.getWidth();

    greenArea = rectangleX2.calcArea() - (rectangleX1.calcArea() + circle1.calcArea());

    cout << "Green Area: " << greenArea;
}
