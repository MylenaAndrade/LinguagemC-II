#include <stdio.h>
/*
      O cardápio de uma lanchonete é o seguinte:
     --------------------------------------------  
       Especificação    |   Código  |      Preço
     --------------------------------------------  
      Cachorro quente   |    100    |      3,50
      Bauru simples     |    101    |      4,50
      Bauru com ovo     |    102    |      5,20
      Hamburger         |    103    |      3,00
      Cheeseburger      |    104    |      4,00
      Refrigerante      |    105    |      2,50
    --------------------------------------------  
  Escrever um algoritmo que obtenha o código do item pedido, a 
  quantidade e calcule   o valor a ser pago. Considere que, a 
  cada execução do algoritmo, somente será calculado o valor 
  relacionado a um item.
*/
  void main(){
     //declaração de variáveis
        int codigo, quant;
        float valor;

    //tabela de pedidos
        printf ("Especificação 		Código 	Preço\n");
	      printf ("Cachorro quente 	100 	3,50\n");
	      printf ("Bauru simples 		101 	4,50\n");
	      printf ("Bauru com ovo 		102 	5,20\n");
	      printf ("Hamburger 			103 	3,00\n");
	      printf ("Cheeseburger 		104 	4,00\n");
	      printf ("Refrigerante 		105 	2,50\n\n");
    //comandos
        printf("Insira o codigo do pedido: ");
        scanf("%d",&codigo);
        printf("Insira a quantidade de itens: ");
        scanf("%d",&quant);
            if(codigo==100)
                {
                valor=(quant*3.50);
                }
            else
                if(codigo==101)
                    {
                     valor=(quant*4.50);
                    }
                else
                    if(codigo==102)
                        {
                        valor=(quant*5,20);
                        }
                    else
                        if(codigo==103)
                            {
                            valor=(quant*3);
                            }
                        else
                            if(codigo==104)
                                {
                                valor=(quant*4);
                                }
                            else
                                {
                                valor=(quant*2.50);
                                }
                    printf("O valor a ser pago e de %.2f reais",valor);
  }