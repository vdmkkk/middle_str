#include "middle_str.h"

char itc_sameChar(string str){
    char res;
    int counter = 0;

    int i = 0;

    while(str[i] != '\0') {
        int j = 0;
        while (str[j] != '\0') {
            if(str[i] == str[j]){
                counter += 1;
            }
            j += 1;
        }
        if(counter == 2) {
            return str[i];
        }
        counter = 0;
        i += 1;
    }
    return -1;
}
