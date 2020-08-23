#include <iostream>
using namespace std;

int main()
{
    int size=0, n=0;
    cout<<"Size of the square matrix: "; // num rows = num columns
    cin>>size;
    int len = (size+1)*size / 2;


    //Input Output format
    cout<<"Input Output format"<<endl;
    cout<<"Size 3 | Input 1 2 3 4 5 6"<<endl;
    cout<<"Output"<<endl;
    cout<<"1 2 3"<<endl;
    cout<<"0 4 5"<<endl;
    cout<<"0 0 6"<<endl;
    // -------------------


    int matrix_elem[len];

    cout<<"Number of elements to enter: "<<len<<endl;
    cout<<"Input the elements in row wise format: "<<endl;
    for(int i=0; i<len; i++)
    {
        cin>>matrix_elem[i];
    }

    cout<<"\n[Matrix] :) "<<endl;
    int k=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i <= j)
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
    cout<<endl;

    return 0;
}
