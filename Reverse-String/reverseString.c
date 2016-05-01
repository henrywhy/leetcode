char* reverseString(char* s) {
    int length = strlen(s);
    char* newString = malloc(length+1);
    
    int i;
    for(i=0; i<length; i++) {
        newString[i] = s[length-i-1];
    }
    
    newString[i] = '\0';
    
    return newString;
    
    
}
