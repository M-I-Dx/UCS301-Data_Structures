#include <iostream>
using namespace std;

int main()
{
    int size=0;
    cout<<"Size of the square matrix: "; // num rows = num columns
    cin>>size;

    int len = 3 * size - 2;

    //Input Output format
    cout<<"Input Output format"<<endl;
    cout<<"Size 3 | Input 1 2 3 4 5 6 7"<<endl;
    cout<<"Output"<<endl;
    cout<<"1 2 0"<<endl;
    cout<<"3 4 5"<<endl;
    cout<<"0 6 7"<<endl;
    // -------------------

    int matrix_elem[len];
    cout<<"Number of elements to enter: "<<len<<endl;
    cout<<"Input the diagonal elements: "<<endl; //Only diagonal elements
    for (int i=0; i<len; i++)
    {
        cin>>matrix_elem[i];
    }

    cout<<"\n[Matrix] :) "<<endl;
    int k=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i-j<=1 && i-j>=-1)
            {
                cout<<matrix_elem[k++]<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
