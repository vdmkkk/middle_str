#include "middle_str.h"

string itc_rmFreeSpace(string str){
    long long i = 0;
    string newstr = "";
    while(str[i] != '\0')  {
        if((str[i] == 32 && str[i - 1] != 32) || str[i] < 32 || str[i] > 32) newstr += str[i];
        i += 1;
    }
    if (newstr[0] == 32) newstr = itc_slice_str(newstr, 1, itc_len(newstr) - 1);
    if((newstr[itc_len(newstr) - 1]) == 32) newstr = itc_slice_str(newstr, 0, itc_len(newstr) - 2);
    return newstr;
}
