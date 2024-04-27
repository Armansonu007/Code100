#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> func(vector<int> arr, int n, int target){
    vector<vector<int>> pairs;
    // Using 2 loops that is n square
    for(int i = 0; i < n; i++){
        int first = arr[i];
        int rem = target - first;
        for(int j = i + 1; j < n; j++){
            if (rem == arr[j]) {
                pairs.push_back({i, j});
            }
        }
    }
    return pairs;
}
      
int main(){
    vector<int> arr{7, 5, 6, 9, 2};
    int n = arr.size();
    vector<vector<int>> results = func(arr, n, 11);
    
    if (!results.empty()) {
        cout << "Pairs of indices that sum up to 11:" << endl;
        for (const auto& pair : results) {
            cout << pair[0] << " " << pair[1] << endl;
        }
    } else {
        cout << "No such pair found." << endl;
    }
    
    return 0;
}
