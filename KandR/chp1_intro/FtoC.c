#include <stdio.h>

// this line and the two below are comments
/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
int main()
{
	/* variable declarations */
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;    /* lower limit of temperature scale */
	upper = 300;  /* upper limit */
	step  = 20;   /* step size */

	fahr = lower;
	/* loop iteratively until the boolean condition is met */
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
