#include<bits/stdc++.h>
using namespace std;
int countOccurence(int arr[],int key,int start,int end)
{
    int count=0;
    int mid=(start+end)/2;
    if(start>end)
        return -1;
    
    if(arr[mid]==key)
    {
        int found=mid;
        while(mid >=0 && arr[mid]==key )
        {
            count++;
            //cout<<"+1";
            mid--;
        }
        while(mid<=end && arr[found]==key)
        {
            
            count++;
            //cout<<"+1";
            found++;
        }
    }
    else if(arr[mid]>key)
    {
        return countOccurence(arr,key,start,mid-1);
    }
    else 
        return countOccurence(arr,key,mid+1,end);
    return count-1;
}
int main()
 {
	//code
	int tc,size,key;
	cin>>tc;
	while(tc--)
	{
	    cin>>size>>key;
	    int arr[size];
	    for(int i=0;i<size;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    cout<<countOccurence(arr,key,0,size)<<endl;
	}
	return 0;
}#include<bits/stdc++.h>
using namespace std;
int countOccurence(int arr[],int key,int start,int end)
{
    int count=0;
    int mid=(start+end)/2;
    if(start>end)
        return -1;
    
    if(arr[mid]==key)
    {
        int found=mid;
        while(mid >=0 && arr[mid]==key )
        {
            count++;
            //cout<<"+1";
            mid--;
        }
        while(mid<=end && arr[found]==key)
        {
            
            count++;
            //cout<<"+1";
            found++;
        }
    }
    else if(arr[mid]>key)
    {
        return countOccurence(arr,key,start,mid-1);
    }
    else 
        return countOccurence(arr,key,mid+1,end);
    return count-1;
}
int main()
 {
	//code
	int tc,size,key;
	cin>>tc;
	while(tc--)
	{
	    cin>>size>>key;
	    int arr[size];
	    for(int i=0;i<size;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    cout<<countOccurence(arr,key,0,size)<<endl;
	}
	return 0;
}