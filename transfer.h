//
// Created by Pantelis Kakariaris on 15/8/2025.
//

#ifndef TRANSFER_H
#define TRANSFER_H
#include <stdio.h>
int IBAN,tram;   //Μεχρι να φτιαχτει η βαση δεδομενων θα τεσταρουμε με φτιαχτό ΙΒΑΝ


void transfer() {
    printf("Please type the IBAN number of the third party\n.");
    scanf("\n%d", &IBAN);

    printf("Enter the amount you want to transfer");
    scanf("\n%d", &tram);

    if (tram <20 || tram >1000) {
        printf("Please transfer an amount between 20E and 1000E");

    }
    /*Να γραφτει κωδικας για το αν ο χρηστης θελει να συνεχισει τις
     *συναλλαγες και να επιστρεψει στο αρχικο μενου ή να τερματισει τις συναλλαγες*/
}

#endif //TRANSFER_H
