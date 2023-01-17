#include<iostream>
using namespace std;
class Swap
{
    int a,b;
    public:
    void getdata();
    void swapv();
    void display();
    void setdata(int x, int y);
};

void Swap::getdata()
{
    cout<<"Enter two numbers: ";
    cin>>a>>b;
}

void Swap::swapv()
{
    a=a+b;
    b=a-b;
    a=a-b;
}

void Swap::display()
{
    cout<<"a="<<a<<"\tb=" <<b<<endl;
} 

int main()
{

    Swap s1;
    s1.getdata();

    cout<< "Before swap: ";
    s1.display();

    s1.swapv();
    cout<< "After swap: ";
    s1.display();

return 0;
}