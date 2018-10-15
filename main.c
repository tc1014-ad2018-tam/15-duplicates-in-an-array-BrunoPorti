//Bruno Portilla Hinojosa
//ITESM
#include <stdio.h>
#include <stdlib.h>
int orden(const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

int main() {
    int n = 0;
    int dup = 0;
    int num = 0;

//le digo al usuario para que sirve el programa, y le pregunto cuantos numeos insertara
    printf("in this program you will input numbers and i will tell you how many duplicates you insterted\n How many numbers will you input?\n");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i<n; i++) { //pido los numeros
        printf("insert numbers one by one:\n");
        scanf("%d", &array[n]);
    }
// mando cantidad de numeros y los numeros al la funcion para ordenar
    qsort(array, n, sizeof(int), orden);


    //Regla
    for(int i = 0; i < n; i+=num+1){
        num = 0;
        for(int j = i + 1; j < n; j++){
            if(array[i] == array[j]){
                num++;
            }
        }
        if(num > 0){
            dup++;
        }
    }

    printf("Hay %d duplicados", dup);
    return 0;

}