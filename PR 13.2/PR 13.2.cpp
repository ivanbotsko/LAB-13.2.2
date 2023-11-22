#include <iostream>
#include <cmath>

#define A 3
#define B 4
#define C 5

#define BASE1 6
#define BASE2 8
#define HEIGHT 10

int main() {
    if (A + B > C && A + C > B && B + C > A) {
        float s = (A + B + C) / 2.0;
        float area = sqrt(s * (s - A) * (s - B) * (s - C));
        std::cout << "Area of a triangle: " << area << std::endl;
    }
    else if (BASE1 > 0 && BASE2 > 0 && HEIGHT > 0) {
        float area = ((BASE1 + BASE2) / 2.0) * HEIGHT;
        std::cout << "Area of a trapezoid: " << area << std::endl;
    }
    else {
        std::cout << "Error: Unable to calculate area" << std::endl;
    }

    return 0;
}