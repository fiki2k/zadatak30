// Program ce pomocu insertion sorta sortirati polje.

#include<stdio.h>
int main(){

   int i, j, broj, temp, polje[50];

   printf("Koliko brojeva ces unijeti u polje: ");
   scanf("%d",&broj);

   printf("Unesi %d elemente: ", broj);
   // Ova petlja sprema brojeve u polje.
   for(i=0;i<broj;i++)
      scanf("%d",&polje[i]);

   // Implementacija insertion sort algoritma.
   for(i=1;i<broj;i++){
      temp=polje[i];
      j=i-1;
      while((temp<polje[j])&&(j>=0)){
         polje[j+1]=polje[j];
         j=j-1;
      }
      polje[j+1]=temp;
   }

   printf("Sortirano polje: ");
   for(i=0;i<broj;i++)
      printf(" %d",polje[i]);

   return 0;
}
