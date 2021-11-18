#include "middle_str.h"


long itc_len(string str) {
    int i = 0;
    while (str[i] != '\0'){
        i += 1;
    }
    return i;
}


string itc_slice_str(string str, int start, int ending){
    if (ending > itc_len(str)) ending = itc_len(str) - 1;
    int i = 0;
    string newstring = "";
    while (str[i] != '\0'){
        if (i >= start && i <= ending){
            newstring += str[i];
        }
        i += 1;

    }
    return newstring;
}


long long itc_find_str(string str1, string str2){
    long long res = -1;
    for (int i = 0; i < itc_len(str1); i++){
        if (itc_slice_str(str1, i, i + itc_len(str2) - 1) == str2){
            res = i;
            break;
        }
    }
    return res;
}


bool itc_isFirstInSecond(string s1, string s2){
    if (itc_find_str(s1, s2) == -1) return false;
    return true;
}
