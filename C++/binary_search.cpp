#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
            s = mid + 1;
        else
            e = mid - 1;

    }
    return -1;
}

int main()
{
 int n,arr[n];
 cin>>n;
 for(int i=0; i<n; i++){
     cin>>arr[i];
 }
 int key;
 cin>>key;
 cout<<binarySearch(arr,n,key);
 return 0;
}
