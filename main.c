#include <stdio.h>

void main(){
    int angka[50], x, i;
    printf("Banyaknya Data: "); scanf("%d", &x);
    for(i = 0;i < x;i++){//(A) Tentukan operator batas perulangan
        printf("Masukkan data ke-%d: ",i+1); scanf("%d", &angka[i]);//(B) Tentukan Variabel array
    }
    printf("Data: ");
    for(i = 0;i < x;i++){
        printf("%d", angka[i]);//(C) Tentukan format tipe data; (D) Tentukan variabel
    }

    printf("hello");
}