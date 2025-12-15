#include <iostream>
#include <vector>
using namespace std;

int main(){  
    pair<int, int> p = {1,5};
    vector<pair<int,int>> vec = {{1,2}, {2,3}, {3,4}};
    
    vec.push_back({4,5});
    vec.emplace_back(4,5);
    
    for(auto val : vec){ //
        cout << val.first << " " << val.second << endl; //
    } 
    return 0;
}