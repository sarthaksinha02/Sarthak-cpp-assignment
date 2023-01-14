#include<iostream>
using namespace std;

void increasing(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    increasing(n-1);
    
}

int main() {
    int a;
    cout<<"Enter the number: ";

    cin>>a;
    increasing(a);

return 0;
}