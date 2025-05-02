#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr; // Heap dynamic using STL vector
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    for (int i : arr) cout << i << " ";
    return 0;
}
