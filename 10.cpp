#include <iostream>
using namespace std;

int main() {
    // Area of circle
    const float pi = 3.14;
    float radius, circle_area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    circle_area = pi * radius * radius;

    cout << "The area of the circle is " << circle_area << endl;

    // Area of rectangle
    float length, width, rectangle_area;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    rectangle_area = length * width;

    cout << "The area of the rectangle is " << rectangle_area << endl;

    return 0;
}
