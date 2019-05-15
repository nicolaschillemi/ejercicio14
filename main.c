#include <stdio.h>

void main()
 {
    float dinero;
    float axos;
    float a_pagar;

    printf("Cuanto dinero desea solicitar?\n");
    scanf("%f",&dinero);
    
    printf("Cuantos a%cos vas a tardar en pagarlo?\n", 164);
    scanf("%f",&axos);
  
    a_pagar = dinero * 0.27 * axos;
  
    printf("Vas a tener que pagar de intereses \n$%f ",a_pagar);

 }
