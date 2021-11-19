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


bool itc_isFirstInSecond(string s1, string s2){
    if (s1 == "") return true;
    if (s2 == "") return false;
    for (int i=0; i < itc_len(s2); i++) {
        cout << itc_slice_str(s2, i, i + itc_len(s1) - 1) << endl;
        if (itc_slice_str(s2, i, i + itc_len(s1) - 1) == s1) return true;
    }
    return false;
}
