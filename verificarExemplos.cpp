#include <iostream>


int exemplo01(){

    //verificação idade

    int idade;


    printf("Digite sua idade: ");
    scanf("%d", &idade);


    if (idade >= 18){
        printf("Você é maior de idade.\n");
    }




    return 0;
}


int exemplo02(){

    //verifica paridade

    int num;


    printf("Digite um número: ");
    scanf("%d", &num);


    if (num % 2 ==0){
        printf("O número é par.\n");
    }




    return 0;
}


int exemplo03(){

    //verificar positividade

    int num;


    printf("Digite um número: ");
    scanf("%d", &num);


    if(num > 0){
        printf("O número é positivo :D\n");
    }


    return 0;
}


int main(){
    //exemplo01();
    //exemplo02();
    exemplo03();
}