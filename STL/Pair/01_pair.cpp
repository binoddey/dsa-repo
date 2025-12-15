#include <iostream>
using namespace std;

int main() {
    pair<int, int> p = {1,5};
    cout << p.first << " " << p.second << endl;

    pair<int, char> m = {1,'a'};
    cout << m.first << " " << m.second << endl;

    pair<int, pair<int, char>> d = {1,{2, 'd'}};
    cout << d.first << " " << d.second.first << " " << d.second.second << endl;


}