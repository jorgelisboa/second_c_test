#include<stdio.h>
#define ELEMENTOS 3
typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa
{
    char nomeCompleto[60];
    int idade;    // define o campo Idade
    float peso;   // define o campo Peso
    float altura; // define o campo Altura
} Pessoa; // Define o nome do novo tipo criado

int getTallestStudent(Pessoa peopleArray[]) {
    unsigned int positionId;
    float altura = 0.00;
    
    //Loop para acahar o maior valor
    for (unsigned int i = 0; i < ELEMENTOS; i++)
    {
        printf("Posição atual na lista %u \n", i);
        if (altura < peopleArray[i].altura)
        {
            positionId = i;
            altura = peopleArray[i].altura;
        }
        printf("Maior número está na posição %u\n", positionId);
    }

    return positionId;
}

int getBiggestImc(Pessoa peopleArray[]) {

}
int getSmallerImc(Pessoa peopleArray[]) {

}

int getOlderStudent(Pessoa peopleArray[]) {
    unsigned int olderAge;

    return olderAge;
}
int getYoungerStudent(Pessoa peopleArray[]) {
    unsigned int youngerAge;

    return youngerAge;
}

int getImcAverage(Pessoa peopleArray[]) {

}

int main() { //Cada função retorna a posição daquela pessoa

    printf("Lendo o 'documento' contendo 30 alunos...");
    //Array de alunos
    Pessoa pessoas[] = {
            {
                "Jorge",
                17,
                120.30,
                1.53
            },
            {
                "Miguel",
                17,
                100.00,
                1.70
            },
            {
                "Lisboa",
                17,
                70.00,
                1.63
            },
        };

    //Imprime o nome de 1 aluno com a maior altura
    unsigned int tallestPeople = getTallestStudent(pessoas);
    printf("A maior pessoa na lista é: %s com %.2f metros de altura", pessoas[tallestPeople].nomeCompleto, pessoas[tallestPeople].altura);

    // //Imprime o nome dos alunos com maior e menor IMC respectivamente
    // getBiggestImc(studentList);
    // getSmallerImc(studentList);

    // //Imprime o nome dos alunos mais velhos e mais novos respectivamente
    // getOlderStudent(studentList);
    // getYoungerStudent(studentList);

    // //Imprime a média dos IMCs dos alunos
    // getImcAverage(studentList);

    getTallestStudent(pessoas);

    return 0;
}