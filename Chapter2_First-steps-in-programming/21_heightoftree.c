/* Calculate height of the tree */
#include <stdio.h>

int main(void)
{
	long shorty = 0L;
	long lofty = 0L;
	long feet = 0L;
	long inches = 0L;
	long shorty_to_lofty = 0L;
	long lofty_to_tree = 0L;
	long tree_height = 0L;
	const long inches_per_foot = 12L;

	// Get lofty height
	printf("Enter lofty height in feets : ");
	scanf("%ld", &feet);
	printf("Enter lofty height in inches : ");
	scanf("%ld", &inches);
	lofty = feet*inches_per_foot + inches;

	// Get shorty height
	printf("Enter shorty height in feets : ");
	scanf("%ld", &feet);
	printf("Enter shorty height in inches : ");
	scanf("%ld", &inches);
	shorty = feet*inches_per_foot + inches;

	// Get distance from shorty to lofty
	printf("Enter distance between shorty and lofty in feets : ");
	scanf("%ld", &feet);
	printf("Enter distance between shorty and lofty in inches : ");
	scanf("%ld", &inches);
	shorty_to_lofty = feet*inches_per_foot + inches;

	// Get distance from lofty to tree
	printf("Enter distance from lofty to tree in feets : ");
	scanf("%ld", &feet);
	lofty_to_tree = feet*inches_per_foot;

	// Calculate the tree height
	tree_height = shorty + (shorty_to_lofty + lofty_to_tree)*(lofty-shorty)/shorty_to_lofty;

	// Display the result in feet and inches
	printf("The height of the tree is %ld feet and %ld inches. \n", tree_height/inches_per_foot, tree_height%inches_per_foot);


	return 0;

}

