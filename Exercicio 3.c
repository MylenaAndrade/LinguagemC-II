#include <stdio.h>
/*   As vendas parceladas se tornaram uma ótima opção para os 
  lojistas que, a cada dia, criam novas promoções para tentar
  conquistar novos clientes. Faça um algoritmo que permita ao 
  lojista informar o preço do  produto e receber as seguintes 
  informações:
        a) O valor com 10% de desconto para pagamento à vista;
        b) O valor da prestação para parcelamento sem juros, em 5x;
        c) O valor da prestação para parcelamento com juros, em 10x, com 20% de             acréscimo no valor do produto.
*/
void main(){
 
 //declaração de variáveis
        float produto, valor, sJuros, cJuros;
  //comandos
        printf("Informe o preco do seu produto: \n R$");
        scanf("%f",&produto);
            valor=produto-(produto*0.1);
        printf("O preco do produto a vista e de: R$ %.2f \n",valor);
            sJuros=(produto/5);
        printf("O valor da prestacao em 5x, sem juros, e de: R$ %.2f \n",sJuros);
            cJuros=((produto*1.2)/10);
        printf("O valor da prestacao em 10x, com juros, e de: R$ %.2f ",cJuros);
   
}