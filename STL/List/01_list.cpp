#include <iostream>
#include <list>
using namespace std;

int main(){
    list <int> l = {14,13,12};
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(5);
    l.push_front(10);
    l.push_back(4);
    l.emplace_back(11);
    l.emplace_front(12);

    printf("Elements in list are: \n");
    for(int i : l){
        cout << i << " " ;
    }
    cout << endl;

    l.pop_back();
    l.pop_front();

    printf("Elements in list are: \n");
    for(int i : l){
        cout << i << " " ;
    }
    cout << endl;
    return 0;
}