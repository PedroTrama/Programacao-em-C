#include <stdio.h>

int main(){

	struct retangulo1{
		int x_ie,y_ie; 
		int x_sd,y_sd; 
	}r1;

	struct retangulo2{
		int x_ie2,y_ie2;
		int x_sd2,y_sd2;
	}r2;

	scanf("%d %d", &r1.x_ie, &r1.y_ie);
	scanf("%d %d", &r1.x_sd, &r1.y_sd);
	scanf("%d %d", &r2.x_ie2, &r2.y_ie2);
	scanf("%d %d", &r2.x_sd2, &r2.y_sd2);

	if((r2.x_ie2 >= r1.x_ie) && (r2.y_ie2 >= r1.y_ie) && (r2.x_sd2 <= r1.x_sd) && (r2.y_sd2 <= r1.y_sd)){
		printf("o segundo retangulo esta contido no primeiro\n");
	}
	else{
		printf("o segundo retangulo nao esta contido no primeiro\n");
	}

return 0;
}