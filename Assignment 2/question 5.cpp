//Given a matrix of m * n elements (m rows, n columns), return all elements of
//the matrix in spiral order.
#include <iostream>
using namespace std;

int main()
{
    int rows=0, cols=0, n=0;
    cout<<"Enter num rows: "<<endl;
    cin>>rows;
    cout<<"Enter num cols: "<<endl;
    cin>>cols;
    int matrix[rows][cols];
    cout<<"Enter the elements that you want to store in the matrix"<<endl;

    for(int i=0; i<rows;i++)
    {
        cout<<"Row "<<i+1<<" elements"<<endl;
        for(int j=0; j<cols; j++)
        {
            cin>>n;
            matrix[i][j] = n;
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

    int t=0, l=0, b=rows-1, r=cols-1, dir=0;
    while(t<=b && l<=r)
    {
        if(dir == 0)
        {
            for(int i=l; i<=r; i++)
            {
                cout<<matrix[t][i]<<" ";
            }
            t++;
        }
        else if(dir == 1)
        {
            for(int i=t; i<=b; i++)
            {
                cout<<matrix[i][r]<<" ";
            }
            r--;
        }
        else if(dir == 2)
        {
            for(int i=r; i>=l; i--)
            {
                cout<<matrix[b][i]<<" ";
            }
            b--;
        }
        else
        {
            for(int i=b; i>=t; i--)
            {
                cout<<matrix[i][l]<<" ";
            }
            l++;
        }
        dir = (dir+1)%4;
    }
    cout<<endl;


    return 0;
}
