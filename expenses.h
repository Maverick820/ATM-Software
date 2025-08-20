//
// Created by Pantelis Kakariaris on 20/8/2025.
//

#ifndef EXPENSES_H
#define EXPENSES_H
#include <stdio.h>
/* Οταν δημιουργηθει βαση δεδομενων να φτιαχτει κωδικας που ο χρηστης θα
 * πληκτρολογει τον αριθμο της καρτας του και θα του επιστρεφει τα χρεη του τελευταιου μηνα */

int xpnses, cardNum, list;

void expenses() {
    printf("Please enter your card number:");
    scanf("\n%d", &cardNum);
    printf("\nYour last month expenditure is: %d ", xpnses);
    printf("%d", list);
    //Δημιουργια λιστας με τα αναλυτικα εξοδα

    return 90;
};

#endif //EXPENSES_H
