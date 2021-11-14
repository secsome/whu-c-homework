#include <stdio.h>

#define N 2

double det(double mat[][N])
{
	for (int i = 1; i < N; ++i) // For each column, force its elements to be zero
	{
		for (int j = i; j < N; ++j) // For each row, minus ratio * element
		{
			if (mat[i - 1][i - 1] == 0) // avoid divide zero
				return 0;
			double ratio = mat[j][i - 1] / mat[i - 1][i - 1];
			for (int k = 0; k < N; ++k)
				mat[j][k] -= ratio * mat[i - 1][k];
		}
	}

	double result = 1.0;
	for (int i = 0; i < N; ++i) // It's upper triangle now
		result *= mat[i][i];

	return result;
}

int main()
{
	double mat[N][N];
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			scanf("%lf", &mat[i][j]);

	printf("%lf\n", det(mat));
	return 0;
}