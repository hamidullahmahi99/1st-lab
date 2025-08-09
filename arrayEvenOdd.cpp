#include<iostream>
using namespace std;
int main()
{
    int even=0,odd =0;
    int arr[6]= {10,11,12,13,14,15};
    for (int i=0;i<6;i++)
    {
        if(arr[i]%2==0)
        {

            even=even+1;
        }
        else
        {

            odd=odd+1;
        }

    }
    cout<<"Even: "<<even<<"\nOdd: "<<odd<<endl;
    return 0;
}
