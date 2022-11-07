#include <stdio.h>

typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
{
    char nomeCompleto[60];
    int idade;    // define o campo Idade
    float peso;   // define o campo Peso
    float altura; // define o campo Altura
} Pessoa; // Define o nome do novo tipo criado

getTallestStudent(peopleArray) {

}

getBiggestImc(peopleArray) {

}
getSmallerImc(peopleArray) {

}

int getOlderStudent(peopleArray) {
    unsigned int olderAge;

    return olderAge;
}
int getYoungerStudent(peopleArray) {
    unsigned int youngerAge;

    return youngerAge;
}

getImcAverage(peopleArray) {

}

int main() {
    printf("Lendo o 'documento' contendo 30 alunos...");
    //Array de alunos
    Pessoa studentList[30];

    //Imprime o nome de 1 aluno com a maior altura
    getTallestStudent(studentList);

    //Imprime o nome dos alunos com maior e menor IMC respectivamente
    getBiggestImc(studentList);
    getSmallerImc(studentList);

    //Imprime o nome dos alunos mais velhos e mais novos respectivamente
    getOlderStudent(studentList);
    getYoungerStudent(studentList);

    //Imprime a média dos IMCs dos alunos
    getImcAverage(studentList);
    return 0;
}
