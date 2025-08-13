//
// Created by Pantelis Kakariaris on 13/8/2025.
//
#ifndef DEPOSIT_H
#define DEPOSIT_H
#include <stdio.h>
int amount;  //Το ποσο πρεπει να κυμενεται απο 20Ε μεχρι και 250

void deposit() {
    printf("Please type the amount of cash you want to deposit:");
    scanf("%d", &amount);

    if (amount > 250) {
        printf("Please deposit an amount between 20E and 250E");

    else{
        printf("Processing...");
        /*Μετα το περας της συναλλαγης να βαλουμε να εμφανιστει απομ
         *ονωνμενο μηνυμα για να παρει ο πελατης την καρτα του*/

        }
    }
}
#endif //DEPOSIT_H
