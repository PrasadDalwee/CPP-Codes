#include <iostream>
using namespace std;

void merge(int arr[],int start, int mid, int end)
{
    int l1=mid-start+1, l2=end-mid;     //length of each sub-array
    
    int ar1[l1];                        //temporary arrays to store two sub-array
    int ar2[l2];
    
    for(int i=0;i<l1;i++) 
        ar1[i]=arr[start+i];
        
    for(int i=0;i<l2;i++)
        ar2[i]=arr[mid+1+i];
        

    int i=0,j=0;                         //i points in l1 array, j in l2 array
    int x=0;                             // x points in main array
    
    while(i<l1 && j<l2)                  //fills elements in main array with comparison by 2-pointer approach until one of the subarray                                         
    {                                    //is completely traversed
        if(ar1[i]>ar2[j])
        {   arr[start+x]=ar2[j];  j++; }
        
        else
        {   arr[start+x]=ar1[i];  i++;}
        
        x++;
    }
    
    while(i<l1)                         //if l2 is completely traversed, fills remaining elements of l1
        {    arr[start+x]=ar1[i];   i++;    x++;    }
    
    while(j<l2)                          //if l1 is completely traversed, fills remaining elements of l2
        {    arr[start+x]=ar2[j];   j++;    x++;    }
}



void mergesort (int arr[],int start, int end)
{
    if(start>=end) return;              // no more subarray division possible
    
    int mid=(start+end)/2;
    
    mergesort(arr,start,mid);           // first half of division
    mergesort(arr,mid+1,end);           //second half
    
    merge(arr,start,mid,end);           //start merging 
}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    mergesort(arr,0,n-1);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
