#include<iostream>
using namespace std;
class SuperClass {
    protected:
        int i;
    public:
        void printNum() {
            cout << "i: " << i << endl;
        }
};

class SubClass: public SuperClass {
    private:
        int j;
    public:
        void printNum() {
            cout << "j: " << j << endl;
        }
};

int main() {
    SubClass obj;
    obj.i = 10;
    obj.j = 20;
    obj.printNum(); // prints "j: 20"
    return 0;
}