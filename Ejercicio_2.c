#include <math.h>
#include <stdio.h>
#define PI 3.141592654
int main()
{  float rad,a;
double num,raiz,numero,potencia,elevado,radianes,result,radianes2,result2,radianes3,result3;

  //raiz
  printf("Ingrese Un Numero:\n");
scanf("%f",&a);
	 num = a;
	 raiz = sqrt(num);
//potencia
 numero = a;
	 potencia = 2;
	 elevado = pow(numero, potencia);
//Coseno
 radianes = a;

result = cos(radianes);
//Seno
 radianes2 = a;
 
result2 = sin(radianes2);
//Tangente
 radianes3 = a;

result3 = tan(radianes3);

   //raiz
	printf("\nLa Raiz Cuadrada De %.2f Es: %.2f\n", num, raiz);
	//potencia
  printf("\nEl Numero  %.2f Elevado Ala Potencia 2 Es: %.2f\n", a, elevado);
  //Coseno
   printf("\nEl Coseno Del Numero  %.2f En Radianes Es: %.2f\n", a, result);
  //Seno
  printf("\nEl Seno Del Numero  %.2f En Radianes Es: %.2f\n", a, result2);
  //Tangente
   printf("\nLa Tangente Del Numero  %.2f En Radianes Es: %.2f\n", a, result3);
  
  
  return 0;

}
