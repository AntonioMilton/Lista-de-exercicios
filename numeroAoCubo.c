#include <stdio.h>

#define TAM 5

/*Preencher um vetor com 5 números inteiros,
solicitados no teclado e mostrar outro vetor
com o cubo dos números do primeiro vetor.*/

void numeroAoCubo(int origem[], int destino[])
{
    int origemTemp;
    for (int i = 0; i < TAM; i++)
    {
        origemTemp = origem[i];
        destino[i] = (origem[i] * origem[i]) * origemTemp;
    }
}

void RecebeNumeros(int vetor[])
{
    for (int i = 0; i < TAM; i++)
    {
        printf("\nDigite numero o %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void ExibirCubos(int cubos[])
{
    for (int i = 0; i < TAM; i++)
    {
        printf("\nO cubo do numero %d e: %d", i + 1, cubos[i]);
    }
}

int main()
{
    int vetor[TAM];
    int vetorAoCubo[TAM];

    printf("\n\nDIGITE 5 numeros interiro para que calculamos o valor ao cubo dos numeros\n\n");
    
    RecebeNumeros(vetor);
    numeroAoCubo(vetor, vetorAoCubo);

    printf("\n\nOs numeros do vetor ao Cubo sao: ");

    ExibirCubos(vetorAoCubo);

    return 0;
}
