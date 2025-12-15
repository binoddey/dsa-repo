#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vec = {1,2,3,4,5};
    vec.erase(vec.begin(), vec.begin()+2); // Removing elements from index 0 to 2 (excluding 2`)
    for(int i : vec){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}