#include <iostream>
#include <algorithm>
using namespace std;

int* smallerNumbers(int* arr, int size) {
    int* result = new int[size];
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] < arr[i]) {
                count++;
            }
        }
        result[i] = count;
    }
    return result;
}

int main() {
    int arr[] = {8, 1, 2, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* result = smallerNumbers(arr, size);
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
return 0;
}