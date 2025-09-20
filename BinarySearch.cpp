#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
    int start = 0,end = size-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        
        if(arr[mid]==key){
            return mid;
            break;
        }
        else if(arr[mid]<key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main() {
    int arr[100] = {30,18,14,11,8,5,1};
    int n = 7;
    int key;

    cout<<"Enter key to search : ";
    cin>>key;

    int found = BinarySearch(arr,n,key);
    if(found == -1){
        cout<<"Key not Found!"<<endl;
    }
    else{
        cout<<"Key found at index : "<<found<<endl;
    }

    return 0;



}