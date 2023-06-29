#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("=========================================================================");
    printf("\n                       CALCULADORA DE INVESTIMENTOS");
    printf("\n=========================================================================");
    printf("\n\n                               EXEMPLO:\n\n- Informe o valor fixo a ser investido por mês (R$): 100");
    printf("\n- Informe a taxa de juros mensal (%%): 1\n");
    printf("\n\n                              RESULTADO:\n");
    printf("\n- Saldo após 1 ano de investimento (com taxa de 1%% ao mês): R$ 1268,25");
    printf("\n=========================================================================\n");

    float valor_mensal, taxa, valor_final;
    int mes, resposta;
    
    printf("\n\n- Informe o valor fixo a ser investido por mês (R$): ");
    scanf("%f", &valor_mensal);
    printf("- Informe a taxa de juros mensal (%%): ");
    scanf("%f", &taxa);

    valor_final = valor_mensal;

    for(mes = 1; mes <= 11; mes++)
    {

        valor_final = (valor_final + valor_mensal) + (valor_final * (taxa / 100));
        
    }
    printf("\n\n                               RESULTADO:\n");
    printf("\n- Saldo após 1 ano de investimento (com taxa de %.2f%% ao mês): R$ %.2f", taxa, valor_final);
    printf("\n=========================================================================\n\n");

    int contador = 1;

    do {

        contador++;

        printf("\nDeseja ver o saldo com mais um ano de investimento ?\n[Digite 1 caso queira | Digite 0 caso não queira]: ");
        scanf("%d", &resposta);

        valor_final = valor_mensal;

        for(mes = 1; mes <= ((contador * 12) - 1); mes++)
        {

            valor_final = (valor_final + valor_mensal) + (valor_final * (taxa / 100));
        
        }

        printf("\n- Saldo após %d anos de investimentos (com taxa de %.2f%% ao mês): R$ %.2f\n", contador, taxa, valor_final);
        printf("-------------------------------------------------------------------------\n\n");

    } while(resposta > 0);

    

    return (0);

}
