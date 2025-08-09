#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Array size: ";
    cin>>n;
    int j=n;
    int s[n];
    cout<<"Input Elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    cout<<"Shelf: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<s[i]<<" " ;
    }
    int item,position;
    cout<<"\nwhich element do you want to Delete? : ";
    cin>>item;
    cout<<"What is the position of the element? : ";
    cin>>position;
    item=s[position];
    for(int i=position; i<n+1; i++)
    {

        s[i]=s[i+1];
        j--;
    }
    s[n]=0;
    n=n-1;
    cout<<"New shelf(After deleting): "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<s[i]<<" ";
    }

    return 0;
}

