//
// Created by Pantelis Kakariaris on 13/8/2025.
//

#ifndef MENU_H
#define MENU_H
#include <stdio.h>
int func;
/* 0 για αναληψη, 1 για καταθεση, 2 για Προσθηκη Χρηματων σε Τριτους,
  3 Ελεγχος Δαπανων, 4 Ελεγχος υπολοιπου, 5 Εξοδος*/
void menu() {
    printf("Please select an option:\n");
    printf("0. Withdraw\n");
    printf("1. Deposit\n");
    printf("2. Transfer\n");
    printf("3. Expenses\n");
    printf("4. Remaining Funds\n");
    printf("5. Exit\n");

        scanf("%d", &func);

    switch (func) {
        case 0:
            //Withdraw
            break;
        case 1:
            //Deposit
            break;
        case 2:
            //Transfer
            break;
        case 3:
            //Expenses
            break;
        case 4:
            //Remaining Funds
            break;
        case 5:
            //Exit
            break;
    }
}




#endif //MENU_H
