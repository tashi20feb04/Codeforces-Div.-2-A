#include <iostream>
using namespace std;

int main()
{
    int w;
    cout<<"Enter the weight of watermelon:"<<endl;
    cin>>w;
    if(w%2==0 && w!=2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}