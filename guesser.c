#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	int turns = 0;
	int correct;
	int guess;
	char name[20];
	bool keepGoing = true;

	srand(time(NULL));

	printf("Please enter your name: ");
	scanf("%s", name);
	printf("Hello %s. A game we shall play. \n", name);

	correct = (rand() %  100) + 1;

	printf("Correct number is: %d", correct);

	while (keepGoing){
		turns++;
		printf("(Turn %d) Please enter a guess: ", turns);
		scanf("%d", &guess);
		if(guess < correct){
			printf("Too Low! \n");
		} else if(guess > correct){
			printf("Too High! \n");
		} else{
			printf("You win! \n");
			keepGoing = false;
		}
		if(turns >= 7){
		printf("It took %d tries. You Lose \n", turns);
		keepGoing = false;
		}
	} // end while loop
	return(0);
	
} // end main
