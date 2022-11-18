/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
int i,n,temp,min,j;
//***tamaño que sera el arreglo***//
    printf("cuantos numeros quiere guardar en el vector:");
            
            scanf("%d", &n);

int list[n];
//***se guardan los valores***//
    for(i=0; i<n; i++){
        printf(" inserte los  numeros que se  registraran  en cada una de las  posiciones:%d", i);
        scanf("%d", &list[i]);
    }
//***Se recorre el  arreglo***//
    for(i=0; i<n-1; i++){
        min=i;
        for (j= i+1; j<n; j++){
            if(list[j] < list[min]){
                min = j;
            }
        }
        //***Se intercambiar valores***//
        if(min != i){
            temp        = list[min];
            list[min]     = list[i];
            list[i]   = temp;
        }
    }

	for(i=0; i<n; i++){
		printf("%d\t",list[i]);
	}
}