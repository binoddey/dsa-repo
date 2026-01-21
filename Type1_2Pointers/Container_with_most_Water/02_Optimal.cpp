#include <iostream>
using namespace std;

int maxArea(int height[], int n) {
    int lp=0, rp=n-1; // lp = left pointer and rp = right pointer
    int max_area = 0;
    
    while(lp<rp){
        int width = rp-lp;
        int h = min(height[lp], height[rp]); // Renamed 'height' to 'h' to avoid conflict
        int area = width * h;
        max_area = max(max_area, area);

        if(height[lp] < height[rp]){
            lp++;
        }
        else {
            rp--;
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