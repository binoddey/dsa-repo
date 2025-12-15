#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5}; //arr is a constant pointer pointing to the first element of the array
    cout << arr << endl; // Output: address of first element of array
    cout << *arr << endl; // Output: 1
    
}