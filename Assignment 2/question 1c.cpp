#include <iostream>
using namespace std;

int main()
{
    int size=0;
    cout<<"Size of the square matrix: "; // num rows = num columns
    cin>>size;
    int len = (size+1)*size / 2;

    //Input Output format
    cout<<"Input Output format"<<endl;
    cout<<"Size 5 | Input 1 2 3 4 5 6 7 8 9 12 23 34 45 56 67"<<endl;
    cout<<"Output"<<endl;
    cout<<"1 0 0 0 0"<<endl;
    cout<<"2 3 0 0 0"<<endl;
    cout<<"4 5 6 0 0"<<endl;
    cout<<"7 8 9 12 0"<<endl;
    cout<<"23 34 45 56 67"<<endl;
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
            if(j <= i)
            {
                cout<<matrix_elem[k++]<<" ";
            }
            if(i < j)
            {
                cout<<0<<" ";
            }

        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
