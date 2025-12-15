#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d = {1,2,3};
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);

    printf("Elements in deque are: \n");
    for(int i : d){
        cout << i << " " ;
    }
    cout << endl;

    cout << d.at(2) << endl;
    cout << d[2] << endl;
    return 0;
}