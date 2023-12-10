#include <stdio.h>
#include <math.h>

int len = 8192;
double twiddle[8192] = { 0 };
double PI = 3.14159265358979;

int main() {

	printf("const float32_t twiddleCoef_rfft_8192[8192] = {\n");

	for (int i = 0; i < len / 2; i++)
	{
		double inter = (double)(i * 2 * PI / (double)len);
		twiddle[2 * i] = cos(inter);
		twiddle[2 * i + 1] = sin(inter);
		printf("%1.9ff, %1.9ff, \n", twiddle[2 * i + 1], twiddle[2 * i]);
	}

	printf("};\n");
}