#include"Header.h"
int getline(char s[], int maxline);
#define L 0
#define H 200
#define S 20


void main()
{

	float fahr, cel;
	fahr =L;
	//printf("hello world");

	while (fahr <= H) {
		cel = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.1f\t %7.1f\n", fahr, cel);
		fahr += S;
	}
//	printf("hello");

	/*Function to count the Charectors*/
	//charectorCount();
	//printf("%d", nc);
	/*Function to Count the Line */
	//LineCount();
	/*Function to Count the words,Lines,Charectoers*/
	//WordCount();
	
	/*Function m to count the number of occurrences of each digit, of white space
characters (blank, tab, newline), and of all other characters*/

	//ArrayCount();



	{
		int len;                 /* current line length */
		int max;                 /* maximum length seen so far */
		char line[MAXLINE];      /* current input line */
		char longest[MAXLINE];   /* longest line saved here */

		max = 0;

		/* Read lines from input */
		while ((len = getline(line, MAXLINE)) > 0) {
			/* Check if the current line is longer than the current maximum */
			if (len > max) {
				max = len;
				/* Copy the current line into the 'longest' array */
				copy(longest, line);
			}
		}

		/* Print the longest line */
		if (max > 0)
			printf("%s", longest);

		return 0;
	}


	int getline(char s[], int maxline);


}