#include <stdio.h>
float sumar (int n1, int n2){
	float r =0;
	r= n1+n2;
	return r;
}
float multi (int n1, int n2){
    float r =0;
    r= n1*n2;
    return r;
}
int main(){
	int n1,n2,op;
	printf ("escribe n1\n");
	scanf("%d",&n1);
	printf ("escribe n2\n");
	scanf("%d",&n2);
	printf ("que quieres hacer?\n1.sumar\n2.restar\n3.multiplicar\n4.dividir\n0.salir\n");
	scanf("%d",&op);
	switch (op){
		case 1:{
			printf("el resultado de la operacion es: %.2f",sumar(n1,n2));
			break;
		}
		default:{
			printf ("error");
			break;
		}
	}
}
