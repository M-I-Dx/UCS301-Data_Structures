#include <iostream>
using namespace std;

class Matrix
{
    private:
        static const int sq=3;
        int a[3][3], a_transpose[3][3];

    public:
         Matrix()
        {
            int n=0, element=0;
            cout<<"Enter the elements for first matrix: "<<endl;

            for(int i=0; i<sq;i++)
            {
                for(int j=0; j<sq;j++)
                {
                    cin>>element;
                    a[i][j] = element;
                }
            }
            cout<<endl;
        }


        void transpose()
        {
            for(int i=0; i<sq; i++)
            {
                for(int j=0; j<sq; j++)
                {
                    a_transpose[i][j] = a[j][i];
                }
            }
            cout<<"Matrix A: "<<endl<<endl;
            for(int i=0; i<sq;i++)
            {
                for(int j=0; j<sq;j++)
                {
                    cout<<a[i][j]<<"\t";
                }
                cout<<endl<<endl;
            }

            cout<<"Matrix A transpose: "<<endl<<endl;
            for(int i=0; i<sq;i++)
            {
                for(int j=0; j<sq;j++)
                {
                    cout<<a_transpose[i][j]<<"\t";
                }
                cout<<endl<<endl;
            }
        }

};

int main()
{
    Matrix m;
    m.transpose();
    return 0;
}
