#include<iostream>
using namespace std;
class Programming {
    public:
        // Constructor with no parameters
        Programming() {
            cout << "I love programming languages" << endl;
        }
        // Constructor with one parameter
        Programming(string language) {
            cout << "I love " << language << endl;
        }
};

int main() {
    // Creating object with no parameter
    Programming p1;
    
    // Creating object with one parameter
    Programming p2("cpp");
    
    return 0;
}