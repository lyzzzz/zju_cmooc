#include <stdio.h>
 
int main(){
 
	int cmlen;
	scanf("%d",&cmlen);
	int foot= cmlen/100.0/0.3048;
	int inch = (cmlen/100.0/0.3048-foot)*12;
	printf("%d %d\n",foot,inch);
 
	return 0;
}