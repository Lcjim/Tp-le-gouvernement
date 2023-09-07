#include <stdio.h>
int TaxePayer(int revenuAnn){
    if (revenuAnn>15000){
        return revenuAnn*0.3;
    }
    if (revenuAnn>50000){
        return revenuAnn*0.5;
    }
    else{
        return revenuAnn*0.1;
    }
}

int RetournerAge(int AnnNaissance){
    return 2023-AnnNaissance;
}
