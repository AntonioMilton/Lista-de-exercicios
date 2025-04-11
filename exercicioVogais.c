#include <stdio.h>
#include <string.h>

/*Criar um programa que receba um nome como
parâmetro e retorne quais letras são vogais e
quais são as constantes. Usar uma função que
verifica se é uma vogal.*/ 

int ehVogal(char c) {
    c = tolower(c); // Garante que funcione com letras maiúsculas
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void vogais(char nome[]) {
    char vogaisSalvas[100];
    char consoantes[100];
    int contadorVogal = 0, contadorConsoante = 0;

    for (int i = 0; nome[i] != '\0'; i++) {
        if (ehVogal(nome[i])) {
            vogaisSalvas[contadorVogal++] = nome[i];
        } else if ((nome[i] >= 'a' && nome[i] <= 'z') || (nome[i] >= 'A' && nome[i] <= 'Z')) {
            consoantes[contadorConsoante++] = nome[i];
        }
    }

    printf("\nVogais encontradas:\n");
    for (int i = 0; i < contadorVogal; i++) {
        printf("Vogal %d: %c\n", i + 1, vogaisSalvas[i]);
    }

    printf("\nConsoantes encontradas:\n");
    for (int i = 0; i < contadorConsoante; i++) {
        printf("Consoante %d: %c\n", i + 1, consoantes[i]);
    }
}
    

int main()
{
    char nome [100];

    printf("\nDigite um nome, para que o programa exiba\nquais sao vogais e quais nao sao: ");
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome,  "\n")] = '\0';
    
    printf("O nome digitado foi: %s", nome);

    vogais(nome);



    return 0;
}
