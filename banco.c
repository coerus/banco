#include <stdio.h>
// code gore, pq sou um pessimo desenvolvedor :)
int main (int argc, char *argv[])
{
   int escolha;
   int deposito = 0;  
   int saldo = 100;
   int saque = 0;
   printf("=============\n");
   printf("bem vindo ao BB(Banco do Bostil)\n");
   printf("=============\n");
   printf("Digite [1] para sacar e [2] para depositar.\n");
   printf("**Seu saldo inicial é: 100R$**\n");
   scanf("%d", &escolha);
   if (escolha == 2) {
           
      printf("Quanto deseja depositar?\n");
      scanf("%d", &deposito);
      saldo = saldo + deposito;
      printf("Seu saldo é: %d\n", saldo);
      }                     
       if (escolha == 1) {
      printf("Quanto deseja sacar?\n");
      scanf("%d", &saque);
      saldo = saldo - saque;
      printf("Seu saldo é: %d\n", saldo);
         
      }
              

        
    return 0;
}

