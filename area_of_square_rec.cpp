#include<iostream>
using namespace std;
class Area {
    public:
        // Function to calculate area of rectangle
        void area(int length, int breadth) {
            cout << "Area of rectangle: " << length * breadth << endl;
        }
        // Function to calculate area of square
        void area(int side) {
            cout << "Area of square: " << side * side << endl;
        }
};

int main() {
    Area a;
    a.area(5,7); // prints "Area of rectangle: 35"
    a.area(4); // prints "Area of square: 16"
    return 0;
}