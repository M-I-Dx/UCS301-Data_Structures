#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout<<"Enter num rows: "<<endl;
    cin>>rows;
    cout<<"Enter num cols: "<<endl;
    cin>>cols;
    int matrix[rows][cols];
    cout<<"Enter the number of elements that you want to store in the matrix"<<endl;

    for(int i=0; i<rows;i++)
    {
        cout<<"Row "<<i+1<<" elements"<<endl;
        for(int j=0; j<cols; j++)
        {
            cin>>matrix[i][j];
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"\n[Matrix] :) "<<endl;
    for(int i=0; i<rows;i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int RowSum[rows], ColSum[cols];
    for(int i=0; i<rows; ++i)
    {
        int sum=0;
        for(int j=0; j<cols; ++j)
        {
            sum += matrix[i][j];
        }
        RowSum[i] = sum;
    }

    for(int i=0; i<cols; ++i)
    {
        int sum=0;
        for(int j=0; j<rows; ++j)
        {
            sum += matrix[j][i];
        }
        ColSum[i] = sum;
    }

    cout<<"Sum of elements row wise: "<<endl;
    for(int i=0; i<cols-1; i++)
    {
        cout<<RowSum[i]<<" ";
    }
    cout<<endl;

    cout<<"Sum of elements columns wise: "<<endl;
    for(int i=0; i<rows+1; i++)
    {
        cout<<ColSum[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
