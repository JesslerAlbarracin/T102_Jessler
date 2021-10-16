#include <stdio.h>

int main(){
    int temp;
    printf("Please input temperature: ");
    scanf("%d", &temp);
    if(temp < 0){
        printf("Ohh the weather is freezing!");
    }
    else if(temp >= 0 && temp <=10){
        printf("It's a very cold weather!");
    }
    else if(temp >= 10 && temp <=20){
        printf("It's a cold weather!");
    }
    else if(temp >= 20 && temp <=30){
        printf("It's a normal weather!");
    }
    else if(temp >= 30 && temp <=40){
        printf("It's a hot weather!");
    }
    else if(temp>=40){
        printf("It's a very hot weather!");
    }
    return 0;
}
