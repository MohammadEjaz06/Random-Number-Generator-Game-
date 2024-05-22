#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
	int number, guess, attempts = 0;
	srand(time(0));
	number = rand() % 100 + 1; // Generates random number between 1 and 100
	
	printf("Welcome to the guessing game!\n");
	printf("I have selected a number between 1 and 100. Try to guess it!\n");
	
	do{
		printf("Enter your guess: \n");
		scanf("%d",&guess);
		attempts++;
		if(guess>number){
			printf("%d is too high! Try agian\n",guess);
		}else if (guess<number){
			printf("%d is too low! Try again\n",guess);
		}else {
			printf("Congratulation You Won. You guessed the number %d in %d attempts!\n",number, attempts);
		}

	}while (guess!= number);
return 0;
}