#include <stdio.h>
#include <stdlib.h>

int main()
{ char nom[10];
  char prenom[10];
  int age;
  char sexe;
  long numero_de_telephone;

    printf("Entrer votre nom: ");
    scanf("%s",nom);
    printf("Entrer votre prenom: ");
    scanf("%s",prenom);
    printf("Entrer votre age: ");
    scanf("%d",&age);
    printf("Entrer votre sexe: ");
    scanf(" %c",&sexe);
    printf("Entre votre numero de telephone: ");
    scanf("%ld",&numero_de_telephone);
    printf("le nom est: %s, le numero de telephone est: %ld",nom,numero_de_telephone);


    return 0;
}
