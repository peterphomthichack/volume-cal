

#include <stdio.h>



int main(void)
{
	float length, width, height, volume;

	printf("Please enter the length: ");
	scanf_s("%f", &length);
	printf("Please enter the width: ");
	scanf_s("%f", &width);
	printf("Please enter the height: ");
	scanf_s("%f", &height);

	volume = length * width * height;

	printf("The volume is: %.pf", volume);
}