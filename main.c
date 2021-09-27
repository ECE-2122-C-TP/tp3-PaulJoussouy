#include <stdio.h>

/*
 * Exo 1:
 */
//int main() {
//    int a= 0, b= 0;
//    printf("Saisir deux intiers: \n");
//    scanf("%d %d", &a,&b);
//    if (a==b){
//        printf("Les deux intiers sont identique");
//    }
//    if(a<=b){
//        printf("Le max est %d \t ", b);
//    }
//    else{
//        printf("Le max est %d \t ");
//    }
//
//    return 0;
//}

/*
 * Exo 2:
 */

//int main(){
//    int longueur= 0, largeur= 0;
//    printf("Saisir longueur du rectangle: \t");
//    scanf("%d", &longueur);
//    printf("Saisir le largeur du rectangle: \t");
//    scanf("%d", &largeur);
//    printf("Le perimetre est: %d \nL'aire est de: %d \n", 2*(longueur + largeur), longueur * largeur);
//
//    return 0;
//}

/*
 * Exo 3:
 */
//
//int main(){
//    const A= 0;
//    printf("Saisir un entier: ");
//    scanf("%d", &A);
//    (A % 3!= 0)? printf("%d n'est pas un multiple de 3", A): printf("%d est un multiple de 3", A);
//    (A <= 10)? printf(" et est plus petit ou égal à 10"): printf(" et plus grand que 10");
//
//    return 0;
//}

/*
 * Exo 4:
 */


//
//int main(){
//    int age= 0, tEnfants= 4, tEtudiants= 6, tJeunes= 6, tSeniors= 6, tFull= 9;
//    printf("Saisir age: \t");
//    scanf("%d", &age);
//    if(age < 0 || age >150){
//        printf("Erreur, Saisir une age valide (positif ou plus petit que 150) \n");
//    }
//    if(age >= 0 && age <= 12){
//        printf("Le prix est de %d \n", tEnfants);
//        return 0;
//
//    }
//    if(age > 12 && age <= 17){
//        printf("Le prix est de %d \n", tJeunes);
//        return 0;
//
//    }
//    if(age >17 && age <= 27){
//        printf("Est il etudiant? (tape 1 si oui, 0 sinon) \n");
//        int etudiant=0;
//        scanf("%d", &etudiant);
//        if(etudiant){
//            printf("Le prix est de %d \n", tEtudiants);
//            return 0;
//        }
//    }
//    if(age >= 65){
//        printf("Le prix est de %d \n", tSeniors);
//    }
//    else{
//        printf("Le prix est de %d \n", tFull);
//    }
//
//    return 0;
//
//}

//#define T_ENFANTS 4
//#define ENF_MIN 0
//#define ENF_MAX 12
//
//#define T_ETUDIANTS 6
//#define ETU_MIN 27
//#define ETU_MAX 65
//
//#define T_JEUNES 6
//#define JEU_MAX 12
//#define JEU_MIN 17
//
//#define T_SENIORS 6
//#define SEN_MIN 65
//
//#define T_FULL 9
//
//
//
//#define SEN_MIN
//
//
//int main(){
//    int age= 0;
//    printf("Saisir age: \t");
//    scanf("%d", &age);
//    if(age < 0 || age >150){
//        printf("Erreur, Saisir une age valide (positif ou plus petit que 150) \n");
//    }
//    if(age >= ENF_MIN && age <= ENF_MAX){
//        printf("Le prix est de %d \n", T_ENFANTS);
//        return 0;
//
//    }
//    if(age > JEU_MAX && age <= JEU_MIN){
//        printf("Le prix est de %d \n", T_JEUNES);
//        return 0;
//
//    }
//    if(age >ETU_MIN && age <= ETU_MAX){
//        printf("Est il etudiant? (tape 1 si oui, 0 sinon) \n");
//        int etudiant=0;
//        scanf("%d", &etudiant);
//        if(etudiant){
//            printf("Le prix est de %d \n", T_ETUDIANTS);
//            return 0;
//        }
//    }
//    if(age >= SEN_MIN){
//        printf("Le prix est de %d \n", T_SENIORS);
//    }
//    else{
//        printf("Le prix est de %d \n", T_FULL);
//    }
//
//    return 0;
//
//}


/*
 * Exo 5:
 */

//int main(){
//    int a=0;
//    printf("Saisir le num de la boisson \t");
//    scanf("%d", &a);
//    if(a==1){
//        printf("Vous avez choisit un coca \t");
//        return 0;
//    }
//    if(a==2){
//        printf("Vous avez choisit un orangina \t");
//        return 0;
//    }
//    if(a==3){
//        printf("Vous avez choisit un oasis \t");
//        return 0;
//    }
//    if(a==10){
//        printf("Vous avez choisit un The \t");
//        return 0;
//    }
//    if(a==11){
//        printf("Vous avez choisit un cafe \t");
//    }
//    else{
//        printf("ERREUR, entrer un nombre valide");
//    }
//    return 0;
//}

/*
 * Exo 6:
 */
//
//int main(){
//    float a= 0.0f, b= 0.0f, c= 0.0f;
//    printf("saisir 1er note \t");
//    scanf("%f %f %f", &a, &b, &c);
//    (a >= 0 && a<= 20 && b >= 0 && b<= 20 && c >= 0 && c <= 20)
//    ? printf("la moyenne  est %f \t", ((a+b+c)/3.0))
//    :printf("ERREUR, vous n'avez pas entrer une et/des note(s) valide");
//
//    return 0;
//
//}

/*
 * Exo 7:
 */

//int main(){
//    int a= 0, b= 0, res= 0, i= 1;
//    printf("Saisir le nombre de classe ouverte: ");
//    scanf("%d", &a);
//    for(i=1; i <= a; i++){
//        printf("Saisir le nombre d'eleve dans la classe numero %d \n", i);
//        scanf("%d",&b);
//        res+=b;
//    }
//    printf("le nombre tot d'eleve est %d \t", res);
//    return 0;
//}

/*
 * Exo 8:
 */

//int main(){
//    int a= 0;
//    do{
//        printf("saisir un entier multiple de  2 ou 7: ",&a);
//        scanf("%d",&a);
//    }
//    while(a % 2!=0 && a % 7!= 0);
//    return 0;
//}

/*
 * Exo 9:
 */

//int main(){
//    int a= 0, c= 1;
//    printf("Saisir le nombre de brique: \t");
//    scanf("%d",&a);
//    while(a > 0){
//        a-= (c*c); // on enleve aux nmbre tot de pierre le nmbre de pierre par etage
//        c+=1;
//    }
//    (a==0)? printf("On peut faire exactement %d etage", c-1): printf("on peut au maxi faire %d étage \t", c-2);
//
//    return 0;
//
//}

/*
 * exo 10:
 */

int main(){
    int a=0, moyenne= 0, compteur= 0;
    do{
        printf("saisir un entier positif: ");
        scanf("%d", &a);
        compteur += 1;
        moyenne += a;
    }
    while (a>=0);
    compteur-=1;
    moyenne-= a;
    printf("la moyenne est: %f \n", ((float)moyenne / (float)compteur));
    return 0;
}