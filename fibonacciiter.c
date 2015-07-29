/*
*Basma El
*This if for all my GitHub people! ^^
*Fibonacci using iteration~~
*/

#include<stdio.h>


int main(void){	//main function

int val;	//the value entered by the user
int i;		//We will use this in the "for loop"
int result;	//the result to be displayed
int res1=0, res2=1;	//we initiate these results to use them in the for loop

printf("Please enter the value: ");	//ask for user input
scanf("%d", &val);	//get value

if(val==0)	//initial conditions!!
	result=0;
else if(val==1)
	result=1;
else{	//if val>1 we start the iteration
	result=0;	//we initiate the result to 0
	for(i=1; i<val; i++){	//we start the for loop
		result= res1+res2;	//remember that "fib(i)=fib(i-1)+fib(i-2)", i'm using the same thing here ^^
		res1=res2;		//modify the values for a new iteration
		res2=result;
	}//end of for
}//end of else
printf("The result is: %d ", result); 	//print result
return 0;

}//end of main
