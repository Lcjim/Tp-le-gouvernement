// By @Arno-Dubois

char getTaxCode(int job) {
    switch (job) {
        case 1: return 'A';
        case 2: return 'C';
        case 3: return 'E';
        case 4: return 'F';
        case 5: return 'B';
        default: return 1;
    }
}

unsigned int getMonthlyIncome(int yearlyIncome) {
    return yearlyIncome / 12;
}