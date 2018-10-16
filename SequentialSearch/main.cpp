#include <iostream>

using namespace std;

int sequentialSearch(int a[], int n, int x) {
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return i;
        return -1;
}

int binarySearch(int a[], int n, int x) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        int mid = (left + right)/2;
        if (a[mid] == x)
            return mid;
        if (a[mid] < x)
            left = mid + 1;
        else
            right = mid + 1;
    }
    return -1;
}

int main() {
    int a[10] = { 5, 7, 1, 11, 13, 15, 16, 19, 25, 0};
    cout << "se:" << sequentialSearch(a, 10, 13) << endl;
    int ab = binarySearch(a, 10, 0);
    cout << "bi:" << ab << endl;
}
