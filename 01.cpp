#include <iostream>
using namespace std;

// Area of triangle
void area(float base, float height) {
    float result = 0.5 * base * height;
    cout << "Area of Triangle = " << result << endl;
}

// Area of circle
void area(float radius) {
    float result = 3.14 * radius * radius;
    cout << "Area of Circle = " << result << endl;
}

int main() {
    float base, height, radius;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    area(base, height);

    cout << "Enter radius of circle: ";
    cin >> radius;
    area(radius);

    return 0;
}

/*
Output:

Enter base and height of triangle: 5 10
Area of Triangle = 25

Enter radius of circle: 7
Area of Circle = 153.86
*/