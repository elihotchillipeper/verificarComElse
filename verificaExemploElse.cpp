#include <iostream>

int exemploElse1(){


//Verificar maioridade


    int idade;


    printf("Digite sua idade: ");
    scanf("%d", &idade);


    if(idade >= 18){
        printf("Você é maior de idade.\n");
    }else{
        printf("Você é menor de idade.\n");
    }


    return 0;


}


int exemploElse2(){


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




int exemploElse3(){


//Verificar positividade


    int num;


    printf("Digite um número: ");
    scanf("%d", &num);


    if(num > 0){
        printf("O número é positivo.\n");
    }else{
        printf("O número é negativo.\n");
    }




    return 0;
}


int main(){
    //exemploElse1();
    //exemploElse2();
    exemploElse3();
}