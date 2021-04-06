#include <stdio.h>
#include <stdlib.h>
#include <math.h> //biblioteca para lidar com operações matemáticas.
#include  <string.h>
void bhaskaracrypto (int a,int b,int c) {

float delta;
 delta=pow (b,2)-4*a*c;
float x1,x2;
x1=(-b+sqrt(delta))/2*a;
x2=(-b-sqrt(delta))/2*a;
printf("Suas chaves são:\n");
printf("%f %f\n",x1,x2);
char v[]="oi ola eu sou um polinomio do 2 grau é serei usado como criptografia";
int i;
for(i=0;i <strlen (v);i++){
  
  v[i]=v [i]+x1+x2;
  
  
}

printf("%s\n",v);
};
void main (){

bhaskaracrypto (1,-5,6);  //função de criptografia.
  
  
}
// a função strlen () mede o tamanho do 
// a função pow() calcula uma potência da um número e um expoente