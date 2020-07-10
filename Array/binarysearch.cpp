#include<iostream>
using namespace std;
int binary_search(int arr[], int start, int end,int key)
{
    int mid=(start+end)/2;
    if(arr[mid]==key)
        return mid+1;
    else if(arr[mid]>key)
        return binary_search(arr,start,mid-1,key);
    else
        return binary_search(arr,mid+1,end,key);
    return -1;
}
int main()
{
    int size,key;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    cout<<binary_search(arr,0,size-1,key);
    return 0;
}