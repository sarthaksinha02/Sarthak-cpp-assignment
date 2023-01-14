#include <bits/stdc++.h>
using namespace std;

void kLarge(int array[], int size, int k)
{
    
    sort(array, array + size, greater<int> ());

    
    for (int i = 0; i < k; i++)
        cout << array[i] << " ";
}


int main()
{
    int array[] = {87, 56, 48, 69, 34, 65, 456, 45};
    int size = sizeof(array) / sizeof(array[0]);
    int k = 4;
    kLarge(array, size, k);
    return 0;
}