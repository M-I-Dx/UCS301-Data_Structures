#include <iostream>
using namespace std;

const int maximum_size = 100;

bool find_saddle_pt(int matrix[maximum_size][maximum_size], int n)
{

	for (int i = 0; i < n; i++)
	{

		int min_row = matrix[i][0], col_index = 0;
		for (int j = 1; j < n; j++)
		{
			if (min_row > matrix[i][j])
			{
				min_row = matrix[i][j];
				col_index = j;
			}
		}

		int k;
		for (k = 0; k < n; k++)

			if (min_row < matrix[k][col_index])
				break;

		if (k == n)
		{
		    cout <<"Saddle Point: "<< min_row<<endl;
		      return true;
		}
	}

	return false;
}

int main()
{
  //Example input
	int matrix[maximum_size][maximum_size] = {{1, 2, 3},
						                                {4, 5, 6},
						                                {7, 8, 9}};
	int n = 3;
	if (find_saddle_pt(matrix, n) == false)
	   cout << "Nope :("<<endl;
	return 0;
}
