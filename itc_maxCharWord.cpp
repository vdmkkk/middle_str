#include "middle_str.h"

string itc_maxCharWord(string str)
{
    int strLen = itc_len(str);
    int counter = 0;
    string newWord = "";
    string res = "";
    for(int i = 0; i < strLen + 1; i++){
        if((str[i] == ' ' or str[i] == '\0') && (itc_len(newWord) > itc_len(res))){
            res = newWord;
            newWord = "";
        }
        if((str[i] >= 'A' and str[i] <= 'Z') || (str[i] >= 'a' and str[i] <= 'z')){
            newWord += str[i];
        }
        if(str[i] == ' ' && str[i + 1] != ' '){
            newWord = "";
            counter += 1;
        }
    }
    if(counter == 0){
        return "error";
    }
    return res;
}
