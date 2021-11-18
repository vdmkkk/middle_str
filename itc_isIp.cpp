#include "middle_str.h"


long long itc_abs(long long num){
    if (num >= 0) return num;
    return -num;
}


double itc_pow(long long num, long long n){
    if (n == 0) return 1;
    long long res = num;
    for (int i=1; i < itc_abs(n); i++){
        res *= num;
    }
    if (n >= 0) return res;
    return 1.0 / res;
}



bool itc_isIp(string str) {
    int i = 0;
    int counter = 0;
    int lastDot = 0;
    string num;
    int intNum, numLen, ip=0, symb;
    while (str[i] != '\0'){
       if (str[i] == '.'){
            num = itc_slice_str(str, lastDot, i - 1);
            lastDot = i + 1;
            counter += 1;
            numLen = itc_len(num);
            for (int i = 0; i < numLen; i++){
                if (!itc_isDigit(num[i])) return false;
                symb = num[i] - 48;
                ip += symb * itc_pow(10, numLen - i - 1);
            }
            if (ip < 0 || ip > 255) return false;
            ip = 0;
       }
       i += 1;
    }
    num = itc_slice_str(str, lastDot, i - 1);
            lastDot = i + 1;
            counter += 1;
            numLen = itc_len(num);
            for (int i = 0; i < numLen; i++){
                if (!itc_isDigit(num[i])) return false;
                symb = num[i] - 48;
                ip += symb * itc_pow(10, numLen - i - 1);
            }
            if (ip < 0 || ip > 255) return false;
    if (counter != 4) return false;
    return true;
}
