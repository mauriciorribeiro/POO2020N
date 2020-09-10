#include "arranjos.h"

bool ano_bissexto(int ano){
    bool bissexto = false;

    if (ano < 1752)
        bissexto = false;
    else {
        if (ano % 400 == 0)
            bissexto = true;
        else {
            if (ano % 100 == 0)
                bissexto = false;
            else {
                if (ano % 4 == 0)
                    bissexto = true;
            }
        }


    }

    return bissexto;
}


