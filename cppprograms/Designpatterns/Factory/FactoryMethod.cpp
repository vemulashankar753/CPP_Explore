#include <iostream>
#include <math.h>
#include <sstream>

using namespace std;
//Factory Method design Pattern

class Point{
public:
    Point(float x, float y):x(x),y(y){

    }

    static Point NewPolar(float r, float theta){
        return {r*cos(theta),r*sin(theta)};//We can write like this: "Point(x,y)"
    }

    static Point NewCartesian(float x, float y){
        return {x,y}; //We can write like this: "Point(x,y)"
    }

    friend ostream& operator<<(ostream& os, const Point& ps){
        os << "x: " << ps.x << "y: " << ps.y;
        return os;
    }

private:
    float x, y;
};

int main() {
    std::cout << "Factory Method design pattern" << std::endl;
    auto p = Point::NewPolar(5, M_PI_4);
    cout << p << endl;
    return 0;
}

