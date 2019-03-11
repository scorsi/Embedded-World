#include <string.h>
#include <stdlib.h>
#include <tgmath.h>
#include "id_component.h"

int faillist_parse_id_component(unsigned int res, char hex[]) {
    long long decimal;
    int i = 0, val, len;
    decimal = 0;

    if (hex == NULL) {
        return EXIT_FAILURE;
    }
    len = strlen(hex);
    len--;

    for(i=0; hex[i]!='\0'; i++)
    {

        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }
    res = decimal;
    return EXIT_SUCCESS;
}