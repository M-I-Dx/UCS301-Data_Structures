#include <iostream>
using namespace std;

int main()
{
    int size=0;
    cout<<"Enter the Size of Square Matrix : ";
    cin>>size;

    int diagonal[size];
    int len = (size-1)*(size)/2;
    int side_elem[len];

    cout<<"Input the diagonal elements: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>diagonal[i];
    }
    cout<<"Input one set of elements of a symmetric: "<<endl;
    int k=0;
    for(int i=0; i<len; i++)
    {
        cin>>side_elem[i];
    }

    cout<<"\n[Matrix] :) "<<endl;
    int a=0, b=0, c=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(j == i)
            {
                cout<<diagonal[a++]<<" ";
            }
            else if(i < j)
            {
                cout<<side_elem[b++]<<" ";
            }
            else
            {
                cout<<side_elem[c++]<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
