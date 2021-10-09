#include<iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}



int partition(int arr[], int s, int e)
{
    int pivot=arr[e];
    int i =s-1;

    for(int j=s;j<e;j++)
    {    
        if(arr[j]<pivot)        
        {
            i++;
            //cout<<" i:"<<i<<" j:"<<j<<endl<<arr[i]<<" "<<arr[j]<<endl;
            swap(arr,i,j);
            //cout<<arr[i]<<" "<<arr[j]<<endl<<endl<<endl;
        }
    }

    swap(arr,e,i+1);
        
    return i+1;
}


void quicksort( int arr[], int s, int e)
{
    //for(int i=s; i<=e; i++) cout<<arr[i]<<" "; cout<<endl;

    if(e>s)
    {
        int pi = partition(arr,s,e);

       // for(int i=s; i<=e; i++) { if(i==pi) cout<<" ["<<arr[pi]<<"] "; else cout<<arr[i]<<" "; } cout<<endl;
        quicksort(arr,s,pi-1);
        quicksort(arr,pi+1,e);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    quicksort(arr,0,n-1);

    for(int i=0;i<n;i++)cout<<arr[i];
}
