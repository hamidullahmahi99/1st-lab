#include<iostream>
using namespace std;
int main()
{

    int a,b=0,c;
    cout<<"Enter the element of array: ";
    cin>>a;
    int arr[a];
    for (int i=0; i<a; i++)
        cin>>arr[i];
    cout<<"Enter the search element: ";
    cin>>c;

    for (int i=0; i<a; i++)
    {

        if(arr[i]==c)
        {
            b=1;
            cout<<"Array Index: "<<i<<endl;

        }
        else
        {

            b=0;
        }
    }

    return 0;
}
