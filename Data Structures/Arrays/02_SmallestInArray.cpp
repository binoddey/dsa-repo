#include <iostream>
using namespace std;

int main() {
    int arr[5] = {11,21,13,4,15};

    int min = arr[0];
    for(int i=0; i<5; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << min << endl;
    return 0;
}