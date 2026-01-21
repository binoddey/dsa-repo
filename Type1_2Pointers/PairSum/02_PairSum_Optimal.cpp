//Pair Sum = Get a target sum and print the pair of indices of the array elements that add up to the target sum.

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target){
    int n = arr.size();
    vector<int> ans;

    int i=0, j=n-1;
    while(i<j){
        int pairSum = arr[i] + arr[j];
        if(pairSum == target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            j--;
        }
    }
    
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int target = 6;

    vector<int> ans = pairSum(arr, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
    
}



// This code has Time Complexity of O(n) and Space Complexity of O(1)