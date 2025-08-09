#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the Array element: " ;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int ar[n];
    for(int i=n-1;i>=0;i--){

        ar[i]=arr[i];
    }
    cout<<"Reverse Array: ";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";

    }
  cout<<endl;

    return 0;
}
