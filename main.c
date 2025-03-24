#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarios[10];
    int idades[10];
    int sexos[10];
    int estados_civis[10];
    int qtdFilhos[10];

    for (int i = 0; i < 10; i++) {
        printf("digite os dados do funcionario %d:\n", i + 1);

        printf("digite o salario: R$ ");
        scanf("%f",&salarios[i]);

        printf("digite a idade: ");
        scanf("%d",&idades[i]);

        printf("digite o sexo (1 - F ou 2 - M): ");
        scanf("%d",&sexos[i]);

        printf("digite o estado civil (1 - c ou 2 - s): ");
        scanf("%d",&estados_civis[i]);

        printf("digite a quantidades de filhos: ");
        scanf("%d",&qtdFilhos[i]);

        printf("\n");


   }

   float total_salario_pais_idosos_solteiros = 0;
   int quantidade_pais_idosos_solteiros = 0;
   for (int i = 0; i < 10; i++){
        if (idades[i] >= 60 && estados_civis[i] == 2 && qtdFilhos[i] > 0){
            total_salario_pais_idosos_solteiros += salarios[i];
            quantidade_pais_idosos_solteiros++;
        }
   }

   if (quantidade_pais_idosos_solteiros > 0){
       printf("media salarial dos pais idosos solteiros: R$ %.2f\n", total_salario_pais_idosos_solteiros / quantidade_pais_idosos_solteiros);
   } else {
       printf("nao ha pais idosos solteiros.\n");
   }

   float maior_salario_mulher_sem_filhos = -1;
   for (int i = 0; i < 10; i++){
        if(sexos[i] == 1 && qtdFilhos[i] == 0){
            if(salarios[i] >  maior_salario_mulher_sem_filhos){
                maior_salario_mulher_sem_filhos = salarios[i];
            }
        }
   }

   if (maior_salario_mulher_sem_filhos != -1){
      printf("o maior salario de uma mulher sem filhos e:R$ %.2f\n", maior_salario_mulher_sem_filhos);
   } else {
       printf("nao ha mulheres sem filhos.\n");
   }
    int quatidade_pais_adolecentes_nao_solteiros_acima_3000 = 0;
    for (int i = 0; i < 10; i++){
        if(idades[i] < 18 && estados_civis[i] !=2 && salarios[i] > 3000){
            quatidade_pais_adolecentes_nao_solteiros_acima_3000++;
        }
    }

    printf("quantidades de pais adolecentes nao solteiros ganhando acima de R$ 3000: %d\n", quatidade_pais_adolecentes_nao_solteiros_acima_3000);

    return 0;
}
