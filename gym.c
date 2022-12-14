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
        if (altura < peopleArray[i].altura)
        {
            positionId = i;
            altura = peopleArray[i].altura;
        }
    }

    return positionId;
}

float calcImc(Pessoa pessoa) {
    return pessoa.peso/(pessoa.altura*pessoa.altura);
}
int getBiggestImc(Pessoa peopleArray[]) {
    unsigned int positionId;
    float pessoaImc = 0.00;
    float maiorImc;
    //Loop para acahar o maior valor
    for (unsigned int i = 0; i < ELEMENTOS; i++)
    {
        pessoaImc = calcImc(peopleArray[i]);
        if (maiorImc < pessoaImc)
        {
            positionId = i;
            maiorImc = pessoaImc;
        }
    }

    return positionId;
}
int getSmallerImc(Pessoa peopleArray[]) {
    unsigned int positionId;
    float pessoaImc = 0.00;
    float menorImc = 100.00; //Literalmente impossível existir
    //Loop para acahar o maior valor
    for (unsigned int i = 0; i < ELEMENTOS; i++)
    {
        pessoaImc = calcImc(peopleArray[i]);
        if (menorImc > pessoaImc)
        {
            positionId = i;
            menorImc = pessoaImc;
        }
    }

    return positionId;
}

int getOlderStudent(Pessoa peopleArray[]) {
    unsigned int olderPersonPosition;
    unsigned int olderAge = 0;
    for (unsigned int i = 0; i < ELEMENTOS; i++)
    {
        if (olderAge < peopleArray[i].idade)
        {
            olderAge = peopleArray[i].idade;
            olderPersonPosition = i;
        }
    }
    return olderPersonPosition;
}
int getYoungerStudent(Pessoa peopleArray[]) {
    unsigned int youngerPersonPosition;
    unsigned int youngerAge = 999;
    for (unsigned int i = 0; i < ELEMENTOS; i++)
    {
        if(youngerAge > peopleArray[i].idade)
        {
            youngerAge = peopleArray[i].idade;
            youngerPersonPosition = i;
        }
    }
    return youngerPersonPosition;
}

float getImcAverage(Pessoa peopleArray[]) {
    //Loop para acahar o maior valor
    float totalImcs;
    for (unsigned int i = 0; i < ELEMENTOS; i++)
    {
        totalImcs += calcImc(peopleArray[i]);
    }
    return totalImcs/ELEMENTOS;
}

int main() { //Cada função retorna a posição daquela pessoa
    //MUDE OS VALORES NA MACRO PARA O NÚMERO DE ELEMENTOS DA ARRAY ABAIXO (e mude a descrição)
    printf("Lendo o 'documento' contendo 3 alunos...\n\n");
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
                24,
                100.00,
                1.70
            },
            {
                "Lisboa",
                47,
                70.00,
                1.63
            },
        };

    //Imprime o nome de 1 aluno com a maior altura
    unsigned int tallestPeople = getTallestStudent(pessoas);
    printf("- A maior pessoa na lista é: %s com %.2f metro(s) de altura\n\n", pessoas[tallestPeople].nomeCompleto, pessoas[tallestPeople].altura);

    // //Imprime o nome dos alunos com maior e menor IMC respectivamente
    unsigned int peopleBigImc = getBiggestImc(pessoas);
    printf("- A pessoa com maior IMC na lista é: %s com IMC = %.2f \n\n", pessoas[peopleBigImc].nomeCompleto, calcImc(pessoas[peopleBigImc]));
    unsigned int peopleSmallImc = getSmallerImc(pessoas);
    printf("- A pessoa com menor IMC na lista é: %s com IMC = %.2f \n\n", pessoas[peopleSmallImc].nomeCompleto, calcImc(pessoas[peopleSmallImc]));

    // //Imprime o nome dos alunos mais velhos e mais novos respectivamente
    unsigned int olderPersonPosition = getOlderStudent(pessoas);
    printf("A pessoa mais velha na lista é: %s com %i anos\n\n", pessoas[olderPersonPosition].nomeCompleto, pessoas[olderPersonPosition].idade);

    unsigned int youngerPersonPosition = getYoungerStudent(pessoas);
    printf("A pessoa mais nova na lista é: %s com %i anos\n\n", pessoas[youngerPersonPosition].nomeCompleto, pessoas[youngerPersonPosition].idade);
    // getYoungerStudent(studentList);

    // //Imprime a média dos IMCs dos alunos
    float imcAverage = getImcAverage(pessoas);
    printf("- A média do IMC de todas pessoas é: %.2f", imcAverage);
    return 0;
}
