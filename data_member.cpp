#include<iostream>
using namespace std;
class Student {
    private:
        string name;
        int age;
        string address;
    public:
        // Default constructor
        Student() {
            name = "unknown";
            age = 0;
            address = "not available";
        }
        // Function to set name and age
        void setInfo(string n, int a) {
            name = n;
            age = a;
        }
        // Function to set name, age and address
        void setInfo(string n, int a, string addr) {
            name = n;
            age = a;
            address = addr;
        }
        // Function to print info
        void printInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Address: " << address << endl;
        }
};

int main() {
    Student students[10]; // Array of 10 student objects
    // Assign info to first student
    students[0].setInfo("John", 21, "New York");
    // Assign info to second student
    students[1].setInfo("Emily", 18, "Los Angeles");
    // Assign info to third student
    students[2].setInfo("Michael", 25, "Chicago");
    // Assign info to fourth student
    students[3].setInfo("Jessica", 22, "Houston");
    // and so on for the remaining students
    for(int i=0;i<10;i++)
    students[i].printInfo();
    return 0;
}