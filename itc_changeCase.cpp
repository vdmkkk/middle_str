#include "middle_str.h"

unsigned char itc_changeCase(unsigned char c) {
    if (c >= 'a' && c <= 'z') return itc_toUpper(c);
    if (c >= 'A' && c <= 'Z') return c + 32;
    return c;
}
