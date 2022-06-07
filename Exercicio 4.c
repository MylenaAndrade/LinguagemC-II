#include <stdio.h>
/*
      Desenvolva um algoritmo que calcule o consumo de combustível 
    de um automóvel em determinada viagem. Para isso, devem ser obtidos: 
        i) o percurso (emquilômetros) da viagem; 
        ii) o número de quilômetros que o carro percorre com um litro de combustível (km/l); 
        iii) o preço do litro do combustível.
            Ao final, o algoritmo deve determinar:
        • A quantidade de combustível, em litros, consumida durante a viagem;
        • O custo total de combustível.
*/
  void main(){
   //declaração de variáveis
      int km, kmL, litros;
      float preco, total;
    //inicio
          printf("Informe o percurso da viagem em Km: ");
          scanf("%d",&km);
          printf("Informe a quantidade de combustivel (Km/L) : ");
          scanf("%d",&kmL);
          printf("Informe o preco do litro do combustivel: ");
          scanf("%f",&preco);
              litros=km/kmL;
              printf("A quantidade de combustivel, em litros, consumida durante a viagem e de: %dL \n", litros);
              total=litros*preco;
              printf("O custo total de combustivel e de: R$ %.2f",total);
}