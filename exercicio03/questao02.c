#include <stdio.h>
#include <string.h>

struct Data {
    int dia, mes, ano;
};

struct Horario {
    int hora, minuto, segundo;
};


typedef struct Compromisso {
    struct Data c_data;
    struct Horario c_horario;
    char * c_desc[250];
} compromisso;




int main () {
    compromisso domingo;
    domingo.c_horario.hora = 10;
    domingo.c_horario.minuto = 10;
    domingo.c_horario.segundo = 10;
    domingo.c_data.dia = 2;
    domingo.c_data.mes = 2;
    domingo.c_data.ano = 2020;
    strcpy(domingo.c_desc, "Passear com o cão");
    return 0;
}