#include<stdio.h>
/*           O IMC (Índice de Massa Corporal)
        é um critério da Organização Mundial de Saúde
        para dar uma indicação sobre a condição de
        peso de uma pessoa adulta. A fórmula é:

              IMC = peso / altura2

  Elabore um algoritmo que, dados o peso e a altura de um adulto, determine 
        a sua condição de acordo com a tabela abaixo:
          --------------------------------------------  
              IMC em adultos   |     Condição
          --------------------------------------------
                IMC < 18,5     |   Abaixo do peso
            18,5 ≤ IMC < 25,0  |     Peso ideal
            25,0 ≤ IMC < 30,0  |     Sobrepeso
            30,0 ≤ IMC < 35,0  |   Obesidade grau I
            35,0 ≤ IMC < 40,0  |   Obesidade grau II
              IMC ≥ 40,0       |   Obesidade grau III
          ---------------------------------------------
*/
  void main(){

  //declaração de variáveis
    float peso, altura;
    float IMC;
  //inicio
       printf("Informe o seu peso:\n ");
       scanf("%f",&peso);
       printf("Informe a sua altura:\n ");
       scanf("%f",&altura);
        IMC = peso/(altura*altura);
        printf("Seu IMC e: %f \n",IMC);
        if(IMC<18.5)
        {
            printf("ABAIXO DO PESO");
        }
        else
            if(IMC<25)
            {
               printf("PESO IDEAL");
            }
            else
                if(IMC<30)
                {
                    printf("SOBREPESO");
                }
                else
                    if(IMC<35)
                    {
                       printf("OBESIDADE GRAU I");
                    }
                    else
                       if(IMC<40)
                       {
                           printf("OBESIDADE GRAU II");
                       }
                       else {
                            printf("OBESIDADE GRAU III");
                            }

  }




