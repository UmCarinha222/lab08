#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    struct Pessoa p;

    printf("Insira o nome: ");
    scanf("%s", p.nome);

    printf("Insira a idade: ");
    scanf("%d", &p.idade);

    printf("Insira o endereco: ");
    scanf("%s", p.endereco);

    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Endereco: %s\n", p.endereco);

    return 0;
}
