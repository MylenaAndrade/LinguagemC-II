#include <stdio.h>
/*  Escrever um algoritmo que obtenha o peso de uma pessoa 
    na Terra e o número de um planeta. Ao final, com auxílio 
    da tabela abaixo, calcular o peso desta pessoa no planeta escolhido.
          ----------------------------------------------------------  
           Número     |      Planeta     |    Gravidade Relativa g
          ----------------------------------------------------------  
              1       |      Mercúrio    |          0,37
              2       |       Vênus      |          0,88
              3       |       Marte      |          0,38
              4       |      Júpiter     |          2,64
              5       |      Saturno     |          1,15
              6       |       Urano      |          1,17
          -----------------------------------------------------------  
Para calcular o peso no planeta escolhido, utilize a seguinte fórmula:
        pesoPlaneta = (pesoTerra/10) * gravidadePlaneta
*/
void main(){
 //declaração de variáveis
  float peso, pesoP;
  int N;

 //wxibição
    printf ("Numero 			Planeta  	  Gravidade Relativa g\n");
	  printf ("1 			     Mercurio 	           0,37\n");
	  printf ("2 			     Venus 		           0,88\n");
	  printf ("3 			     Marte 		           0,38\n");
	  printf ("4 			     Jupiter 	           2,64\n");
	  printf ("5 			     Saturno 	           1,15\n");
	  printf ("6 			     Urano 		           1,17\n\n");
  //comandos
      printf("Digite o seu peso:\n ");
      scanf("%f",&peso);
      printf("Escolha 1 numero:\n ");
      scanf("%d",&N);
        switch(N)
        {
          case 1:
            pesoP=(peso/10)*0.37;
            break;
          case 2:
            pesoP=(peso/10)*0.88;
            break;
          case 3:
            pesoP=(peso/10)*0.38;
            break;
          case 4:
            pesoP=(peso/10)*2.64;
            break;
          case 5:
            pesoP=(peso/10)*1.15;
            break;
          case 6:
            pesoP=(peso/10)*1.17;
            break;
        }
            
       printf("Seu peso no planeta escolhido e: %.2f ",pesoP);   
            
      
}