#include <stdio.h>
#include <cs50.h>

// Make Mario's half pyramid based off user's height input

int main(void)
{
	// Declare variable
	int height = 0;

	// Get pyramid height from user
	do {
	    printf("How tall shall Mario's pyramid be? Choose a number no larger than 23: ");
	    height = GetInt();
		   }
	while (height <= 0 || height > 23);

	// Loops through and prints either spaces or #s for each colum and row
	for(int i = 0; i < height; i++)
	{
	    // Print spaces
	    for(int j = 0; j < height-i-1; j++)
	    {
	        printf(" ");
	    }
	    // Print #
	    for(int k = 0; k < i+2; k++)
	    {
	        printf("#");
	    }
	    printf("\n");
	}
	return 0;

}
