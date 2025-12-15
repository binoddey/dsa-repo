#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec1; // Declaration of vector
    vector <int> vec2 = {1,2,3,4,5};
    vector <int> vec3 (5,10); //vector of size 5 with all values as 10
    vector <int> vec4(vec2); //copying vec2 to vec4

    for(int val : vec3){
        cout << val << " ";
    } 
    cout <<endl;
    
    for(int val : vec4){
        cout << val << " ";
    } 
    return 0;
}