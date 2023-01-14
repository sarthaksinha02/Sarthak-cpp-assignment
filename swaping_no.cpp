#include<iostream>

using namespace std;

class swap
{
    

    int a,b;
    public:
    void getdata();
    void swapv();
    void display();
};

void swap::getdata()
{

    cout<<"Enter two numbers: ";
    cin>>a>>b;
}

void swap::swapv()
{
a=a+b;
b=a-b;
a=a-b;
}

void swap::display()
{
    cout<<"a="<<a<<"tb=" <<b;
}

int main()
{

    swap s1;

    s1.getdata();

    cout<< "Before swap: ";
    s1.display();

    s1.swapv();
    cout<< "After swap: ";
    s1.display();

return 0;
}