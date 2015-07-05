int titleToNumber(char* s) {
    int number = 0;
    int len = strlen(s);
    for(int i=0; i<len; i++) {
        number += (int)pow(26, len-1-i) * (s[i]-'A'+1);
    }
    
    return number;
}
