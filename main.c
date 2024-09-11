#include <stdio.h>
#include <string.h>

int main()
{
    int n, acertos = 0;
    char gabarito[100], resposta[100];
    float porcentagem;

    printf("Quantas questoes? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Digite a reposta da questao %d: ", i);
        scanf("%s", &resposta[i]);
    }
    
    for(int i = 1; i <= n; i++)
    {
        printf("Digite o gabarito da questao %d: ", i);
        scanf("%s", &gabarito[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if(resposta[i] == gabarito[i])
        {
            acertos++;
        }
        else
        {
            printf("Erro na questao %d\n", i);
        }
    }
    porcentagem = ((float)acertos / (float)n) * 100;
    printf("Acertou %d questoes, com uma taxa de acerto de %.2f porcerto", acertos, porcentagem);
}