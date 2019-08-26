#include <stdio.h>
int main()
{


   {

	//'d' é a diametro  
	float d;
	//'h' será o altura 
	float h;
	//'a' sera o o valor do aluminio em cubo
	float a=8.95;
	float pi=3.14;
	float resp2;
	//'resp' sera a resposta
	float resp1;
  
    printf ("Olá! vamos começar?\n");
    printf ("há antes de tudo ao digitar os valores usar ponto '.' ao invez de virgulas \n");
	printf ("Porfavor digite a diametro:\n");
	 scanf ("%f", &d);
	printf ("agora digite o a altura:\n");
     scanf ("%f", &h);
 
    resp1 = pi * d + h * pi / a;
    

    printf("p valor gasto é;\n' %f\n", resp1);
	return 0;

    }

}
