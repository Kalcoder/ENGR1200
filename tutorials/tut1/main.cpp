#include <iostream>
#include <cmath>

struct Point {
    double x;
    double y;
};

// Write a program that takes two points from cin and prints the distance between them.
int main() {
    Point p1, p2;
    std::cout << "Enter x and y coordinates of the first point: ";
    std::cin >> p1.x >> p1.y;
    std::cout << "Enter x and y coordinates of the second point: ";
    std::cin >> p2.x >> p2.y;

    double distance = std::sqrt(std::pow(p1.x - p2.x, 2) + std::pow(p1.y - p2.y, 2));
    std::cout << "The distance between the two points is " << distance << std::endl;

    return 0;
}
