#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

double getRandomNumber(const double min, const double max);
bool isInsideCircle(const double x, const double y)
{
	const double x_c = 0.5;
	const double y_c = 0.5;
	const double r = 0.5;
	const double f = (x-x_c)*(x-x_c) + (y - y_c)*(y - y_c) - r*r;
	if (f > 0.0) return false;
	else return true;
}

int main()
{
//	FILE *of = fopen("circle.txt", "w");
	
	srand((unsigned int)(NULL));

	int num_square = 0;
	int num_circle = 0;

	for (int j = 0, test_itr = 1; j < 100; j++, test_itr *= 2)
	{
		for (int i = 0; i < test_itr; i++)
		{
			const double x = getRandomNumber(0, 1);
			const double y = getRandomNumber(0, 1);
			num_square++;

			if (isInsideCircle(x, y) == true)
			{
				num_circle++;
			//	printf("%f, %f\n", x, y);
			//	fprintf(of, "%f, %f\n", x, y);
			}
		}

		const double pi_est = 4.0*(double)num_circle / (double)num_square;
		printf("%d´Ü°è %d  %f\n", j, test_itr, pi_est);
	}
//	fclose(of);
	return;
}

double getRandomNumber(const double min, const double max)
{
	double random_number = (double)rand() / (double)RAND_MAX;
	random_number = min + (max - min)*random_number;

	return random_number;
}