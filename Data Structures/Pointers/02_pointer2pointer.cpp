//pointer to pointer
#include <iostream>
using namespace std;

int main() {
    int a =10;
    int* ptr = &a;
    int** pptr = &ptr; //pointer to pointer
    cout << ptr << endl;
    cout << pptr << endl;
    cout << *ptr << endl;
    cout << *pptr << endl;
    cout << **pptr << endl;
    return 0;

}