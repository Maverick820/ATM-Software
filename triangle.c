#include <stdio.h>
#include <stdlib.h>
//ATM LIKE PROGRAM
int x,y,selection,id,pin;


void withdraw(){   //Αναληψη χρηματω
    printf("Select the amount of cash you want to withdraw ");
    scanf("%d", &x);

    switch(x) {      //Επιλογη ποσου αναληψης
        case 1:
            printf("You withdrew 200E");
            break;
        case 2:
            printf("You withdrew 400E");
            break;
        case 3:
            printf("You withdrew 500E");
            break;
        case 4:
            printf("You withdrew 800E");
            break;
        case 5:   //Σε περιπτωση που ο χρηστης θελει να γραψει το ποσο που τον εξυπηρετει
            printf("Type the amount of cash you want");
            scanf("%d", &y);
            printf("You withdrew %dE.", y);
            break;
        case 6:
            ;        //Να βρεθει τροπος για επιστροφη στο αρχικο μενου
            break;
    }

}

void menu() {

}



int main(){

       printf("Please insert your card");
       scanf("%d", &id);
       if (id == 0) {
           menu();
           return 0;
       }
       else {
           printf("System Error.Please check your card.");
           return 1;
       }

       return 0 ;
}

