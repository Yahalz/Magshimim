#include <stdio.h>
//pre defining what the mile to kilometers ratio is.
#define MILE_TO_KILOMETER 1.609344

int main(void)
{
	//saying what the mile value is and multiplying it to get kilometers.
	float miles = 45.66;
	printf("%f miles in kilometers is %f",miles,MILE_TO_KILOMETER);
	return 0
}



