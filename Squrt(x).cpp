#include <iostream>
using namespace std;

int mySqrt(int x) {

        if(x<2)
        return x;


        int start = 0,end = x,ans,mid;

        while(start<=end){
            mid = start + (end - start)/2;

            if(mid==x/mid){
                ans = mid;
                break;
            }
            else if(mid<x/mid){
                ans = mid;
                start = mid + 1;
            }
            else 
            end = mid - 1;
        }
        return ans;
    }

int main() {

    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    int result = mySqrt(n);

    cout<<"Sqaure root of "<<n<<" = "<<result<<endl;
    
}