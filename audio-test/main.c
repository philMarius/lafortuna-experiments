#include <stdio.h>
#include <math.h>

#define SAMPLE_RATE 50
#define CYCLE_LENGTH 1		// in seconds

int main(void) {
	float phase = 0;
	for (int i = 0; i <= SAMPLE_RATE; i++) {
		float y = sin(phase);

		phase = phase + ((2 * M_PI) / SAMPLE_RATE);

		// if (phase > (2 * M_PI)) {
		// 	phase = phase - (2 * M_PI);
		// }

		printf("%f, %f\n", phase, y);
	}
}
