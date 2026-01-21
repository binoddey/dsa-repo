#include <iostream>
using namespace std;

int maxArea(int height[], int n) {
    int max_area = 0;
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int ht = min(height[i], height[j]);
            int width = j - i;
            int area = ht * width;
            max_area = max(max_area, area);
        }
    }
    
    return max_area;
}

int main() {
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(height) / sizeof(height[0]);
    
    int result = maxArea(height, n);
    cout << "The maximum area is: " << result << endl;
    
    return 0;
}