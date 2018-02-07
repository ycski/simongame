#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int simonround (void);
_Bool ready (void);

int main(void) {
	long int total=0;
	int number;
	int roundcount = 0;
	int guess;

	srand((unsigned)(time(NULL)));

	printf("Welcome to Simon. Hope you have a good memory\n");
	
	while (1==1) {
		int count;
		roundcount++;

		number = simonround();
		total = total * 10 + number;

		if (ready()) {
			void clrscr();
			system("@cls||clear");
		}
		printf("Enter the sequence: ");
		scanf("%i", &guess);
		void clrscr();
		system("@cls||clear");
		if (guess != total) {
			break;
		}
		
	}
	printf("\nThanks for playing haha\nYou made it %i rounds\nThe sequence was: %li\n",roundcount,total);
	system("pause");
	return 0;
}

int simonround (void) {
	int number;
	number = rand() % 10;
	printf("Next number: %i", number);
	return number;
}

_Bool ready (void) {
	int yes;
	printf("\nEnter 1 to continue: ");
	scanf("%i", &yes);
	while (yes != 1) {
		scanf("%i", &yes);
	}
	printf("\n");
	return 1;
}
