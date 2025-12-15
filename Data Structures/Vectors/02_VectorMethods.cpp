#include <iostream>
#include <vector> //include vector
using namespace std;

int main() {
    vector <int> vec = {1,2,3,4,5}; 
    vector <int> vec1 = {2,5}; 
    
    vec.size(); //returns size of vector
    vec.empty(); //returns true if vector is empty
    vec.front(); //returns first element
    vec.back(); //returns last element
    vec.push_back(6); //pushes element at the end
    vec.pop_back(); //removes element from the end
    vec.insert(vec.begin(), 10); //inserts element at the beginning
    vec.erase(vec.begin()); //erases element from the beginning
    vec.clear(); //clears the vector
    vec.swap(vec1); //swaps the vectors
    vec.resize(10); //resizes the vector
    vec.capacity(); //returns the capacity of the vector


    return 0;
}

