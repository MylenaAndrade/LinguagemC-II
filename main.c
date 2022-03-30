#include<stdio.h>
#include<stdlib.h>
  void main(){
/* PRIMEIRO EXERCICIO
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

*/

/* SEGUNDO EXERCICIO
 //declaração de variáveis
  float peso, pesoP;
  int N;

 //inicio
    printf("Digite o seu peso:\n ");
    scanf("%f",&peso);
    printf("Escolha 1 numero:\n ");
    scanf("%d",&N);
     if(N==1)
     {
        pesoP=(peso/10)*0.37;
     }
     else
        if(N==2)
        {
           pesoP=(peso/10)*0.88;
        }
        else
            if(N==3)
            {
               pesoP=(peso/10)*0.38;
            }
            else
                if(N==4)
                {
                   pesoP=(peso/10)*2.64;
                }
                else
                    if(N==5)
                    {
                       pesoP=(peso/10)*1.15;
                    }
                    else
                        {
                            pesoP=(peso/10)*1.17;
                        }
        printf("Seu peso no planeta escolhido e:%f ",pesoP);
*/
  /*TERCEIRO EXERCICIO
   //declaração de variáveis
        float produto, valor, sJuros, cJuros;
  //inicio
        printf("Informe o preco do seu produto: \n R$");
        scanf("%f",&produto);
            valor=produto-(produto*0.1);
        printf("O preco do produto com 10 por cento de desconto e de %f reais\n",valor);
            sJuros=(produto/5);
        printf("O valor da prestacao, sem juros, em 5x e de %f reais\n",sJuros);
            cJuros=(10*(produto*0,2));
        printf("O valor da prestacao com parcelamento de 10x, com juros de 20 por cento, e de %f reais",cJuros);
  */

  /*QUARTO EXERCICIO
   //declaração de variáveis
    int km, kmL, CC;
    float preco, total;
  //inicio
        printf("Informe o percurso da viagem em Km: ");
        scanf("%d",&km);
        printf("Informe a quantidade de Km que o carro percorre com 1L de combustivel: ");
        scanf("%d",&kmL);
        printf("Informe o preco do litro do combustivel: ");
        scanf("%f",&preco);
            CC=km/kmL;
            printf("A quantidade de combustivel, em litros, consumida durante a viagem e de: %dL \n",CC);
            total=CC*preco;
            printf("O custo total de combustivel e de: R$ %f",total);

*/
  /*QUINTO EXERCICIO
    //declaração de variáveis
        int codigo, quant;
        float valor;

    //inicio
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
                    printf("O valor a ser pago e de %f reais",valor);
*/
  /*SEXTO EXERCICIO
   //declaração de variáveis
      int N, a, b, c;
  //inicio
        printf("Escolha um numero de 1 a 3: ");
        scanf("%d",&N);
        printf("Escolha um número A: ");
        scanf("%d",&a);
        printf("Escolha um número B: ");
        scanf("%d",&b);
        printf("Escolha um número C: ");
        scanf("%d",&c);
            if(N==1)
            {
                if(a<b&&b<c)
                {
                    printf("Os valores em ordem crescente e: %d %d %d",a,b,c);
                }else
                    if(b<a&&a<c)
                    {
                        printf("Os valores em ordem crescente e: %d %d %d",b,a,c);
                    }else
                        if(c<b&&b<a)
                        {
                            printf("Os valores em ordem crescente e: %d %d %d",c,b,a);
                        }else
                            if(c<a&&a<b)
                            {
                                 printf("Os valores em ordem crescente e: %d %d %d",c,a,b);
                            }else
                                if(b<c&&c<a)
                                {
                                      printf("Os valores em ordem crescente e: %d %d %d",b,c,a);
                                }else
                                    {
                                         printf("Os valores em ordem crescente e: %d %d %d",a,c,b);
                                    }

            }else
                if(N==2)
                {
                   if(a>b&&b>c)
                    {
                        printf("Os valores em ordem crescente e: %d %d %d",a,b,c);
                    }else
                        if(b>c&&c>a)
                        {
                            printf("Os valores em ordem crescente e: %d %d %d",b,c,a);
                        }else
                            if(c>a&&a>b)
                            {
                                printf("Os valores em ordem crescente e: %d %d %d",c,a,b);
                            }else
                                if(b>a&&a>c)
                                {
                                    printf("Os valores em ordem crescente e: %d %d %d",b,a,c);
                                }else
                                    if(c>b&&b>a)
                                    {
                                        printf("Os valores em ordem crescente e: %d %d %d",c,b,a);
                                    }else
                                        {
                                           printf("Os valores em ordem crescente e: %d %d %d",a,c,b);
                                        }
                }else
                    {
                      if(a>b&&b>c)
                        {
                        printf("%d %d %d",b,a,c);
                        }else
                        if(b>c&&c>a)
                        {
                            printf("%d %d %d",c,b,a);
                        }else
                             if(c>a&&a>b)
                            {
                                printf("%d %d %d",a,c,b);
                            }else
                                if(b>a&&a>c)
                                {
                                    printf("Os valores em ordem crescente e: %d %d %d",a,b,c);
                                }else
                                    if(c>b&&b>a)
                                    {
                                        printf("Os valores em ordem crescente e: %d %d %d",b,c,a);
                                    }else
                                        {
                                           printf("Os valores em ordem crescente e: %d %d %d",c,a,b);
                                            }

                        }

*/

}




