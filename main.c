#include <stdio.h>
 void main()

 {

    float money;
    float years;
    float to_pay;


    printf("Cuanto dinero desea solicitar?\n");
    scanf("%f",&money);

    printf("Cuantos anos vas a tardar en pagarlo?\n");
    scanf("%f",&years);

    to_pay = money * 0.27 * years;

    printf("Vas a tener que pagar de intereses \n$%f ",to_pay);


 }