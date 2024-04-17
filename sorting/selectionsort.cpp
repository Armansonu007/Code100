/*
// Approach:
// Selection sort divides the array into two parts: sorted and unsorted.
// It repeatedly selects the smallest element from the unsorted part and moves it to the sorted part.

procedure selectionSort(arr: array of integers)
    n = length of arr
    
    // Iterate through the array
    for i from 0 to n - 1 do
        // Assume the current index as the index of the minimum element
        minIndex = i
        
        // Find the index of the minimum element in the unsorted part
        for j from i + 1 to n - 1 do
            // If the current element is smaller than the assumed minimum element
            if arr[j] < arr[minIndex] then
                // Update the index of the minimum element
                minIndex = j
            end if
        end for
        
        // Swap the minimum element with the first element of the unsorted part
        if minIndex is not equal to i then
            swap arr[i] with arr[minIndex]

*/
#include <iostream>
#include <vector>
using namespace std;

void func(vector<int>& arr, int n) { 
    for (int i = 0; i < n - 1; ++i) {
        int mini = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[mini]) 
                mini = j;
        }
        if (i != mini) //condition for not extra swapping
            swap(arr[i], arr[mini]);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    func(arr, n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
