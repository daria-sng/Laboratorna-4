#include <stdio.h>
#include <stdlib.h>
#define N 15

int main(){
    system("chcp 65001");
    int array_X [N];

    puts("Введіть 15 елементів масиву: ");
    for(int i = 0; i < N; i+=1){
        scanf("%d", &array_X[i]);
    }

    int n;
    puts("Введіть цільове значення А: ");
    scanf("%d", &n);
    
    int flag = 0;
    int change;
    for(int i = 0; i < N; i+=1){
        if(array_X[i] == n){
            printf("Результат лінійного пошуку: Елемент знайдено! Елемент: %d Номер: %d Індекс: %d\n", n, i+1, i);
            flag = 1;
            break;
        }
 
        
    }
    if(!flag){
        puts("Результат лінійного пошуку: У вашому масиві немає такого елемента");
    }

    for(int i = 0; i < N; i+=1) {
    for(int j = 0; j < N-1; j+=1){
        if( array_X[j] < array_X[j+1] ){
            change = array_X[j];
            array_X[j] = array_X[j+1];
            array_X[j+1] = change; 
        }
    }

    }

    puts("Масив за спаданням: ");
    for(int i = 0; i < N; i+=1){
    printf("%d ", array_X[i]);
    }

    int Left = 0;
    int Middle;
    int Right = N-1; 
    int index = -1;

    while(Left<=Right){
        Middle = (int)(Left+Right) / 2;
        if(array_X[Middle]==n){
            index = Middle;
        }
        
        if(n < array_X[Middle]){
            Left = Middle+1;
        }
        else{
            Right = Middle-1;
        }
    }

    if(index != 1){
        printf("\nРезультат бінарного пошуку: Елемент знайдено! Елемент: %d Номер: %d Індекс: %d\n", n, Middle+1, Middle);
    }
    else{
        puts("Результат бінарного пошуку: Немає такого елемента ");
    }

    return 0;
}