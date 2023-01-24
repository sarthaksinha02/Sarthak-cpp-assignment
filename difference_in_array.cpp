#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {4, 5, 2, 9, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n); 
    int diff = arr[n-1] - arr[0]; 
    cout << "Difference between largest and smallest element: " << diff << endl;

    return 0;
}
