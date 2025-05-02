#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5]; // Fixed size in heap
    for (int i = 0; i < 5; i++) arr[i] = i + 1;
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    delete[] arr;
    return 0;
}
