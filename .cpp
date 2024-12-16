#include <iostream>
#include <windows.h>
#include <vector> 

using namespace std;

vector<int> getNegElem(int arr[], int size) {
    vector<int> negElem; 

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            negElem.push_back(arr[i]);
        }
    }

    return negElem; 
}

int main() {
    int arr[] = { 1, -4, 7, 2, -9, 3, 0, -5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> negArr = getNegElem(arr, size);


    cout << "Negative array elements: ";
    for (int i = 0; i < negArr.size(); i++) {
        cout << negArr[i] << " ";
    }
    cout << endl;

    return 0;
}
