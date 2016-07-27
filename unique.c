#include <stdio.h>
#include <string.h>
int main(){
int flag = 0, i, n, j;
char str[100], ch, ch_comp;
printf("Enter a string of letters: ");
fgets (str, 100, stdin);
n = strlen(str);
for (i = 0; i <= n - 2; i++){
	ch = str[i];
	for (j = i + 1; j <= n - 2; j++){
		ch_comp = str[j];
		if (ch == ch_comp){
		printf("Not unique");
		flag = 1;
		}
	if (flag == 1)
		break;
	}
if (flag == 1)
	break;
}
return 0;
}

