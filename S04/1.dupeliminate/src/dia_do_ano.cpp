#include "arranjos.h"

int dia_do_ano(int dia, int mes, int ano){
    int dias = dia;
    int diasMes[12] = {31,0,31,30,31,30,31,31,30,31,30,31};

    if (ano_bissexto(ano))
        diasMes[1] = 29;
    else
        diasMes[1] = 28;
    
    for (int m=1; m<mes; m++){
        dias += diasMes[m-1];
    }
    
    return dias;

}


