#include <stdio.h>

typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data data;
    Horario horario;
    char descricao[100];
} Compromisso;

int main() {
    Compromisso compromisso;
    compromisso.data.dia = 25;
    compromisso.data.mes = 12;
    compromisso.data.ano = 2022;
    compromisso.horario.hora = 14;
    compromisso.horario.minutos = 30;
    compromisso.horario.segundos = 0;
    strcpy(compromisso.descricao, "Reunião de projeto");

    printf("Compromisso: %s\n", compromisso.descricao);
    printf("Data: %d/%d/%d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("Horário: %d:%d:%d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);

    return 0;
}
