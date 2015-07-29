/*
*Basma El, this is for my GitHub people ^^
*This program finds a fibonacci sequence using recursive calls
*/



#include<stdio.h>
#include<math.h>

int recursive_fib(int val){	//recursive fibonacci function, takes the value as input and returns the result
	
	if(var==0)		//exception case, fib(0)=0!
		return 0;
	if(var==1)		//same, fib(1)=1!!
		return 1;
	return recursive_fib(var-1)+recursive_fib(var-2); //recursive call to the function

}//end of recursive_fib

int main(void){	//the main function ^^

	int val;	//the value entered, for which we calculate the fib number
	int result;	//the result to be displayed
	
	
	printf("Please enter the value: ");	//ask the user for input
	scanf("%d", &val);
	
	result= recursive_fib(var);	//call recursive_fib function, assign the outcome to the result
	
	printf("The fibonacci result for the value entered is: %d \n ", result);	//display the result to the user!
	
	return 0;

}//end of main function
