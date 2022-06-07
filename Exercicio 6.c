#include <stdio.h>
/*
    Escrever um algoritmo que, dados um número inteiro i 
    e três valores a, b e c, apresente os 3 números na ordem 
    definida por i, como descrito abaixo:
      a) i = 1: os três valores em ordem crescente;
      b) i = 2: os três valores em ordem decrescente;
      c) i = 3: o maior valor deve ser apresentado no meio dos outros.
*/
  void main(){
     //declaração de variáveis
        int N;
        int a, b, c;/*existem 6 possibilidades para se colocar em ordem
                          1-(a,b,c); 2-(b,c,a); 3-(c,a,b);
                          4-(b,a,c); 5-(c,b,a); 6-(a,c,b) */
    //comandos
          printf("Escolha um numero de 1 a 3: ");
          scanf("%d",&N);
          printf("Escolha um número A: ");
          scanf("%d",&a);
          printf("Escolha um número B: ");
          scanf("%d",&b);
          printf("Escolha um número C: ");
          scanf("%d",&c);
    //condições
              if(N==1)//caso i= 1(ordem crescente)
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
                  if(N==2)//caso i= 2(ordem decrescente)
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
                        if(a>b&&b>c)//caso i=3(o maior valor entre os tres no meio)
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
  
}
    