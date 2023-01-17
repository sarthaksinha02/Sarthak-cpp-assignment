#include<iostream>
using namespace std;
class Rectangle {
    private:
        int length, breadth;
    public:
        // Constructor with no parameters
        Rectangle() {
            length = 0;
            breadth = 0;
        }
        // Constructor with two parameters
        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }
        // Constructor with one parameter
        Rectangle(int l) {
            length = l;
            breadth = l;
        }
        // Function to calculate area
        int area() {
            return length * breadth;
        }
};

int main() {
    // Creating objects with no parameters
    Rectangle r1;
    cout << "Area of rectangle with no parameters: " << r1.area() << endl;
    
    // Creating objects with one parameter
    Rectangle r2(5);
    cout << "Area of rectangle with one parameter: " << r2.area() << endl;
    
    // Creating objects with two parameters
    Rectangle r3(4, 6);
    cout << "Area of rectangle with two parameters: " << r3.area() << endl;
    
    return 0;
}