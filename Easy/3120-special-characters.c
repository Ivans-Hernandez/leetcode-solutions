int numberOfSpecialChars(char* word) {

    int minuscula[26] = {0};
    int mayuscula[26] = {0};
    int count = 0;

    for (int i = 0; word[i] != '\0'; i++) {

        if (islower(word[i])) { // palabra reservada que comprueba si es minuscula
            minuscula[word[i] - 'a'] = 1;
        }

        if (isupper(word[i])) { // palabra reservada que comprueba si es mayuscula
            mayuscula[word[i] - 'A'] = 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (minuscula[i] && mayuscula[i]) {
            count++;
        }
    }

    return count;
}


    
