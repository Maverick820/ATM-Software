//
// Created by Pantelis Kakariaris on 13/8/2025.
//

#ifndef WITHDRAW_H
#define WITHDRAW_H
int cash;

void withdraw(){   //Αναληψη χρηματω
    printf("Select the amount of cash you want to withdraw ");
    scanf("%d", &cash);

    switch(cash) {      //Επιλογη ποσου αναληψης
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
#endif //WITHDRAW_H
