//Given an integer A, generate a square matrix filled with elements
//from 1 to A2 in spiral order.
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Size of the square matrix: "<<endl;
    cin>>size;

    int matrix[size][size];
    int row_start=0, column_start=0, row_end=size-1, column_end=size-1, num=1;
    while(row_start <= row_end && column_start <= column_end)
    {
        for(int i=column_start; i<=column_end; i++)
        {
            matrix[row_start][i] = num++;
        }
        row_start++;

        for(int i=row_start; i<=row_end; i++)
        {
            matrix[i][column_end] = num++;
        }
        column_end--;

        if(row_start <=row_end)
        {
            for(int i=column_end; i>=column_start; i--)
            {
                matrix[row_end][i] = num++;
            }
        row_end--;
        }

        if(column_start <=column_end)
        {
            for(int i=row_end; i>=row_start; i--)
            {
                matrix[i][column_start] = num++;
            }
        column_start++;
        }
    }

    cout<<"\nSpiral matrix :) "<<endl;
    for(int i=0; i<size;i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
