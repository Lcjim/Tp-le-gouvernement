#include <stdio.h>
#include "A.c"
#include "B.c"

int main() {
    int yearlyIncome;
    int birthYear;
    int job;

    printf("Combien gagner vous par ans :");
    scanf("%dl", &yearlyIncome);

    printf("Quelle est votre année de naissance :");
    scanf("%d", &birthYear);

    printf("Quelle est votre métier\n(1: agriculteur,2: compatble,3: etudiant,4: fonctionnaire, 5: bucheron) :");
    scanf("%d", &job);

    int taxToPay = TaxePayer(yearlyIncome);
    int age = RetournerAge(birthYear);
    char taxCode = getTaxCode(job);
    unsigned int monthlyIncome = getMonthlyIncome(yearlyIncome);

    printf("Bienvenue, nos services constates que vous avez %d ans et que vous devrez payer cette annee %d $ pour le code d'activite %c car vous depassez le montant mansuel de %d $ de revenus.", age, yearlyIncome, taxCode, monthlyIncome);

    return 0;
}
