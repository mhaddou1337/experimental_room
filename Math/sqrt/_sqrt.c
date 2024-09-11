#include <unistd.h>
#include <stdio.h>
#include <math.h>

double _sqrt(double x)
{
    if(x < 0)
    {
		return(NAN);
    }
	else if (x == 0)
	{
		return(0);
	}
	double x_de_n = x;
	double tolerance = 0.00001;
	double x_de_n_plus_1;
	double a = x;

	while(1)
	{
		x_de_n_plus_1 = 0.5 * (x_de_n+a/x_de_n);


		if((x_de_n-x_de_n_plus_1) > -tolerance && (x_de_n-x_de_n_plus_1) < tolerance)
		{
			break;
		}
		x_de_n = x_de_n_plus_1;
	}
	return (x_de_n_plus_1);
}
/*int main(void)
{
	//int number = _sqrt(-9);
	//printf("%lf",sqrt(-9));
	printf("%0.lf",_sqrt(9));
}*/