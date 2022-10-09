#include "stdio.h"

int main(){

   // FILE *filep = fopen("huseyindosya.txt","a");
   // FILE *filep = fopen("huseyindosya.txt","w");
    FILE *filep = fopen("huseyindosya.txt","r");
    if  (filep == NULL){
        printf("Dosya Oluşturulamadı.\n");
    }
    else{
        printf("Dosya oluşturma Başarılı!\n");

    }
}