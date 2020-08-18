#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int BinSearch(int l, int h, int k, vector<int> arr)
{
    if(l <= h)
    {
        int mid = floor((l + h)/2);
        if(k == arr[mid])
        {
            return mid;
        }
        else if(k < arr[mid])
        {
            return BinSearch(l, mid-1, k, arr);
        }
        else
        {
            return BinSearch(mid+1, h, k, arr);
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << BinSearch(arr.front(), arr.back(), 2, arr);
}
