#include <iostream>


int exercicio01(){

    //maior q 10 (sem else)

    int num;


    printf("Digite um número: ");
    scanf("%d", &num);


    if(num > 10){
        printf("O número é maior que dez.");
    }




    return 0;
}


int exercicio02(){

    //igual a zero (sem else)

    int num;


    printf("Digite um número: ");
    scanf("%d", &num);


    if(num == 0){
      printf("O número é zero.\n");
    }


    return 0;

}


int exercicio03(){

//Verificar se é negativo


    int num;


    printf("Digite um número: ");
    scanf("%d", &num);


    if(num < 0){
        printf("O número é negativo.\n");
    }else{
        printf("O número é positivo ou zero.\n");
    }


    return 0;
}


int exercicio04(){


    //Verificar paridade


    int num;


    printf("Digite um número: ");
    scanf("%d", &num);


    if (num % 2 ==0){
        printf("O número é par.\n");
    }else{
        printf("O número é impar.\n");
    }


    return 0;
}

int exercicio05(){

 //numero 10 com else if

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);


    if(num > 10){
        printf("O número é maior que dez. \n");
    }else if(num == 10){
        printf("O número é igual a 10. \n");
    }else{
        printf("O número é menor que 10. \n");
    }


    return 0;
}


 int exercicio06(){

    // dia da semana

    int n;

    printf("Digite um número de 1-7: ");
    scanf("%d", &n);

    if(n == 1){ 
        printf("Domingo! \n");
    }else if(n == 2){
        printf("Segunda-feira! \n");
    }else if(n == 3){
        printf("Terça-feira! \n");
    }else if(n == 4){
        printf("Quarta-feira! \n");
    }else if(n == 5){
        printf("Quinta-feira! \n");
    }else if(n == 6){
        printf("Sexta-feira! \n");
    }else{
        printf("Sábado! \n");
    }

    return 0;
 }


 int main(){
    //exercicio01();
    //exercicio02();
    //exercicio03();
    //exercicio04();
    //exercicio05();
    exercicio06();
 }