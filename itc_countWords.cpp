#include "middle_str.h"

int itc_countWords(string str) {
    if (str == "") return 0;
	str += " ";
	bool notSymbol = false;
	int counter = 0;
	int strLen = itc_len(str);
	for (int i = 1; i < strLen; i++) {
		if (str[i] == ' ' && (str[i - 1] >= 'a' && str[i - 1] <= 'z' || str[i - 1] >= 'A' && str[i - 1] <= 'Z')) {
			if (!notSymbol) counter += 1;
			notSymbol = false;
		}
		else {
			if (!(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')) notSymbol = true;
		}
	}
	return counter;
}
