#include <stdio.h>
#include <string.h>

int main()
{
    int n, acertos;
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
        else{
            printf("Erro na questao %d", i);
        }
    }
    porcentagem = (float)acertos / (float)n;
    printf("Acertou %d questoes, com uma taxa de acerto de %.2f porcerto", acertos, porcentagem * 100);
}