//This program demonstrates hierarchical inheritance and method overriding in C++.
#include <iostream>
using namespace std;

class Shape {
public:
    void display() {
        cout << "This is a shape" << endl;
    }
};

class Polygon : public Shape {
public:
    void display() {
        cout << "Polygon is a shape" << endl;
    }
};

class Rectangle : public Polygon {
public:
    void display() {
        cout << "Rectangle is a polygon" << endl;
    }
};

class Triangle : public Polygon {
public:
    void display() {
        cout << "Triangle is a polygon" << endl;
    }
};

class Square : public Rectangle {
public:
    void display() {
        cout << "Square is a rectangle" << endl;
    }
};

int main() {
    Shape shape;
    Polygon polygon;
    Rectangle rectangle;
    Triangle triangle;
    Square square;

    shape.display();      // Output: This is a shape
    polygon.display();    // Output: Polygon is a shape
    rectangle.display();  // Output: Rectangle is a polygon
    triangle.display();   // Output: Triangle is a polygon
    square.display();     // Output: Square is a rectangle

return 0;
}