// Bu funksiya katta harfdagi so'zlarni kichik harflarga o'girib beradi.
char* toLowerCase(char* s){

    int i = 0;
    while (s[i] != '\0'){
        if (s[i] >= 65 && s[i] <= 90){
            s[i] = s[i] + 32;
        }
        i++;

    } return s;
}

