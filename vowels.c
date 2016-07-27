#include <stdio.h>
#include <string.h>
int main(){
int i, n, counter = 0;
char str_old[100], ch, str_new[100];
printf("Enter a string of letters: ");
fgets (str_old, 100, stdin);
n = strlen(str_old);
for (i = 0; i <= n - 2; i++){
    ch = str_old[i];
    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U'){
	str_new[counter] = ch;
	counter++;
	}
}
printf("%s\n", str_new);
return 0;
}
