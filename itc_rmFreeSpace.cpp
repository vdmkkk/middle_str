#include "middle_str.h"

string itc_rmFreeSpace(string str)
{
    string str1 = "";
    string str2 = "";
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str2 += str[i];
        }
        else {
            if (str2 != "") str2 = " ";
            str1 += str2;
            str2 = "";
            str1 += str[i];
        }
        i += 1;
    }
    return str1;
}
