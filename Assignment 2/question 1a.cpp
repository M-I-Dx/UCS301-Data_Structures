#include <iostream>
using namespace std;

int main()
{
    int size=0;
    cout<<"Size of the square matrix: "; // num rows = num columns
    cin>>size;

    int matrix_elem[size];
    cout<<"Input the diagonal elements: "<<endl; //Only diagonal elements

    for(int i=0;i<size;i++)
    {
        cin>>matrix_elem[i];
    }

    cout<<"\n[Matrix] :) "<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i == j)
                cout<<matrix_elem[i]<<" ";
            else
            {
                cout<<0<<" "; // Non-diagonal elements of the matrix are zero
            }

        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
