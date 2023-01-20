#include <stdio.h>

struct aluno {
    char nome[100];
    int matricula;
    char curso[100];
};

int main() {
    struct aluno alunos[5];
    for (int i = 0; i < 5; i++) {
        printf("Informe o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);
        printf("Informe o numero de matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Informe o curso do aluno %d: ", i+1);
        scanf("%s", alunos[i].curso);
    }
    printf("\nDados dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
    }
    return 0;
}
