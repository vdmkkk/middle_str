#include "middle_str.h"

bool itc_isDigit (unsigned char c){
    int num = c;
    if (num >= 48 && num <= 57) return true;
    return false;
}
