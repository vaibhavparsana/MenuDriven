#include<stdio.h>
#include<string.h>
#include <ctype.h>

void menuController();
int getNumber();
void displayMenu();
int factorial(int);
int sumSquare(int);
int fibonacci(int);
void printOutput(int);

int main(){
	menuController();
	return 0;
}

void menuController() {
	int action;
	int output;
	
	int n = getNumber();
	displayMenu();
	
	printf("\nPlease select one action from the above list? ");
	scanf("%d",&action);
	
	while(action > 0 || action < 5) {
		
		switch(action) {
			case 1:
				output=factorial(n);
				printf("The factorial of %d (%d!) = ", n, n);
				printOutput(output); 
				break;
			case 2:
				output=sumSquare(n);
				printf("The sum square of %d = ", n);
				printOutput(output); 
				break;
			case 3:
				output=fibonacci(n);
				printf("The Fibonacci of %d = ", n);
				printOutput(output); 
				break;
			case 4:
				printf("Goodbye!"); 
				break;
			default:
				printf("Your entry was invalid!");
			break;
		}
		
		if(action==4){
			break;
		}
		
		printf("\nPlease select one action from the above list? ");
		scanf("%d",&action); 
	}
}


int getNumber() {
	
	int number;
	
	printf("\nPlease enter an integer between 1 and 10: ");
	scanf("%d",&number);
	
	while(number<1 || number>10) {
		printf("You have entered an invalid entry!");
		printf("\nPlease enter an integer between 1 and 10: ");
		scanf("%d",&number);	
	}
	
	return number;	
}

void displayMenu() {
	printf("\nACTION LIST MENU");
	printf("\n----------------\n");
	printf("\n1. Compute Factorial of n (n!)");
	printf("\n2. Compute SumSquare of n");
	printf("\n3. Compute Fibonacci of n");
	printf("\n4. Exit\n");
}

int factorial(int val){
	
	if (val == 0) {
        return 1; 
	}
    return val * factorial(val - 1); 
}

int sumSquare(int val) {
    int sum = 0;
   	int i;
	for (i = 1; i <= val; i++){
      sum += (i * i);
	}
	return sum;
}

int fibonacci(int val) {
	if (val <= 1){
        return val; 
	}
    return fibonacci(val - 1) + fibonacci(val - 2); 
}

void printOutput(int val) {
	printf("%d",val);
}

