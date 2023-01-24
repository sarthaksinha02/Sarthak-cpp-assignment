#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {4, 5, 2, 9, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n); // sort the array
    int sum = arr[0] + arr[1]; // add the first and second elements (smallest elements)
    cout << "Sum of two smallest elements: " << sum << endl;

return 0;
}