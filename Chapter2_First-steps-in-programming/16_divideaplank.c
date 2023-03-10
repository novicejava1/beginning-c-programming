/* Divide a Plank to equal parts */
#include <stdio.h>

int main(void)
{
	float plank_length = 10.0f;
	float piece_count = 4.0f;
	float piece_length = 0.0f;

	piece_length = plank_length/piece_count;
	printf("The plank of %.2f can be cut into %.2f pieces of length %.2f\n", plank_length, piece_count, piece_length);
}