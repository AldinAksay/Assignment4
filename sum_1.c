#include <stdio.h>
int main(){
int user_input, count = 0, i, x, sum = 0, ch, array1[500];  /*defines variables*/
do{
printf("Enter integers [press 0 to terminate]: "); /*prompts the user to enter integers*/
scanf("%d", &user_input); /*scans the data*/
if (user_input == 0) /*determines if the user inputs 0, it stops asking for input*/
	break;
array1[count] = user_input;
count ++; /*keeps track of the number of integers that were input*/
}while (1);
int array2[count - 1];
for(i = 0; i <= count - 1; i++){  /*for loop that takes each element at a time from the first array*/
	ch = array1[i]; /*the value of the i-th element of array1*/
	sum = ch + sum; /*finds the sum of ch and all of the elements before it */
	array2[i] = sum; /*put integer sum into element count of array*/
	printf ("%d\n", array2[i]);
	}
		
return 0;
}

