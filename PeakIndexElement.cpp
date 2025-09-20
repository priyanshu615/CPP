#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {

        int start = 0, end = arr.size()-1,mid,ans = -1;

        while(start<=end){

            mid = end + (start-end)/2;

            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                ans = mid;
                break;
            }

            else if(arr[mid]>arr[mid-1])
            start = mid + 1;

            else 
            end = mid - 1;
        }

        return ans;
        
    }

int main() {
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result = peakIndexInMountainArray(arr);

    cout<<"Peak Index in Mountain Array is : "<<result<<endl;

    
    
}