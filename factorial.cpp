#include<iostream>
using namespace std;
class Solution{
    public:
    static long long fact(int n){
        long long z = 1;
        for(int i=1; i<=n; ++i){
            z*=i; 
        }
        return z;
    }
};
int main() {
 
    int n;
    long long z;
     cout<<"enter the number: ";
     cin>>n;
    z = Solution::fact(n);
    cout<<z<<endl;
return 0; 

}