#include "middle_str.h"

string itc_Cezar(string str, int k) {
    if (k == 0) return str;
    int i = 0;
    char newChar;
    string res = "";
    while (str[i] != '\0'){
        if (str[i] >= 'a' && str[i] <= 'z'){
            if (str[i] + k > 'z') res += str[i] + k - 26;
            else if (str[i] + k < 'a') res += str[i] + k + 26;
            else res += str[i] + k;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            if (str[i] + k > 'Z') res += str[i] + k - 26;
            if (str[i] + k < 'A') res += str[i] + k + 26;
            else res += str[i] + k;
        }
        else res += str[i];
        i += 1;
    }
    return res;
}
