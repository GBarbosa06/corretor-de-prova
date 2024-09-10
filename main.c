#include <stdio.h>

int main()
{
    int n, acertos;
    char gabarito[n], resposta[n];

    printf("Quantas questoes? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Digite a reposta da questao %d: ", i);
        scanf("%s", &resposta[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("*");
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
    }
    printf("Acertou %d questoes", acertos);
}