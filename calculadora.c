#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <math.h >>

int main ()
{
setlocale (LC_ALL, "portugu�s");

   float res, potencia, raiz;
   float num1 = 0, num2 = 0;
   char op = '0';

   Faz
   {
       sistema ("cor 1E");

       printf ("\ n \ t \ t ========== CALCULADORA 2.0 ========== \ n \ n");

       printf ("(1) somar \ n");
       printf ("(2) subtrair \ n");
       printf ("(3) multiplicar \ n");
       printf ("(4) dividir \ n");
       printf ("(5) Potencia��o \ n");
       printf ("(6) Raiz Quadrada \ n");
       printf ("(7) Convers�o de bases \ n");
       printf ("(0) Sair \ n");

       printf ("\ nInforme uma opera��o: \ n \ t");
       op = getche ();

       if (op! = '7' && op! = '5' && op! = '6' && op! = '0')
        {
         printf ("\ nDigite o primeiro n�mero (use a vers�o do APENAS): \ n \ t");
         scanf ("% f", & num1);

         printf ("\ nDigite o segundo n�mero (use a vers�o do APENAS): \ n \ t");
         scanf ("% f", & num2);

         if (op == '1')
          {
          res = num1 + num2;
          printf ("\ nO resultado da soma �:% f \ n", res);
          }

         sen�o se (op == '2')
          {
          res = num1-num2;
          printf ("\ nO resultado da subtra��o �:% f \ n", res);
          }

         sen�o se (op == '3')
          {
          res = num1 * num2;
          printf ("\ nO resultado da multiplica��o �:% f \ n", res);
          }

         sen�o se (op == '4')
          {
          res = num1 / num2;
          printf ("\ nO resultado da divis�o �:% f \ n", res);
          }

       }

       sen�o se (op == '5')
        {
        printf ("\ nInforme o valor da base: \ n");
        scanf ("% f", & num1);
        printf ("\ nInforme o valor da exposi��o: \ n");
        scanf ("% f", & num2);

        pot�ncia = pow (num1, num2);

        printf ("\ nO resultado da pot�ncia �:% f \ n", pot�ncia);
       }

       caso contr�rio, se (op == '6')
        {
        printf ("\ nInforme o valor: \ n");
        scanf ("% f", & num1);

        raiz = sqrt (num1);

        printf ("\ nA raiz quadrada de% f �:% f \ n", num1, raiz);
       }

       sen�o se (op == '7')
       {
           bases vazias ();
           bases ();
       }

       sen�o se (op == '0')
       {
        sa�da (0);
       }
   } while (op! = '0');
    retornar 0;
}

bases vazias ()
{
    setlocale (LC_ALL, "portugu�s");

   int dec = 0, op��o, escolha;
   caixa de carv�o [8];

   Faz{
   printf ("\ n \ t \ t ============ CONVERSOR DE BASES ============ \ n");

   printf ("Qual convers�o deseja fazer? \ n");

   printf ("(1) Decimal para hexadecimal \ n");
   printf ("(2) hexadecimal para decimal \ n");
   printf ("(3) decimal para bin�rio \ n");
   printf ("(4) Bin�rio para decimal \ n");
   printf ("(5) decimal para octal \ n");
   printf ("(6) Decimal para decimal \ n");
   printf ("(0) Voltar \ n");
   scanf ("% i", & escolha);
   getchar ();

   if (escolha == 1)
    {
      printf ("\ nInforme o valor DECIMAL a convertido \ n");
      scanf ("% i", & opcao);
      getchar ();
      printf ("O valor% em hexadecimal �:% x \ n", opcao, opcao);
    }

   sen�o se (escolha == 2)
    {
      printf ("\ nDigite o valor em HEXADECIAL a ser convertido \ n");
      scanf ("% x", & opcao);
      printf ("\ nO valor% x em decimal �:% i \ n", opcao, opcao);
    }

   sen�o se (escolha == 3)
    {
      printf ("\ nInforme o valor DECIMAL a convertido: \ n");
      scanf ("% i", & opcao);
      itoa (opcao, bin, 2);
      printf ("\ n O n�mero% no bin�rio �:% s \ n", opcao, bin);
    }

   sen�o se (escolha == 4)
    {
      printf ("\ nInforme o valor do bin�rio a ser convertido: \ t");
      scanf ("% d", & opcao);
      for (int i = 0; opcao> 0; i ++)
       {
         dec = dec + pow (2, i) * (opcao% 10);
         opcao / = 10;
       }
      printf ("\ n Decimal equivalente ao valor do bin�rio informado �: >>% d \ n", dez);
    }

    sen�o se (escolha == 5)
    {
        printf ("\ nInforme o valor em DECIMAL: \ n");
        scanf ("% i", & opcao);
        printf ("\ nO valor% em octal �:% o \ n", opcao, opcao);
    }

    sen�o se (escolha == 6)
    {
        printf ("\ nInforme o valor em OCTAL: \ n");
        scanf ("% o", & opcao);
        printf ("\ n% em decimal e:% i", opcao, opcao);

    }
   } while (escolha! = 0);

    Retorna ;
}