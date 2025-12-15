#include <iostream>
#include <vector> //include vector
using namespace std;

int main() {
    vector <int> vec; //empty vector
    vector <int> vec1 = {1,2,3,4,5}; //vector with elements
    vector <int> v (3,5); //vector of size 3 with all elements as 5
    
    //print vector using for each loop
    for(int i: vec1){
        cout << i << " ";
    }

    return 0;
}


/* For Each Loop
    for(int i : vec1){
        code
    }

    this means that for an iterator i, which isnt index but the element itself, we are running a loop

*/
