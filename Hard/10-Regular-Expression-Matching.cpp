class Solution {
public:

    bool match(string& s, string& p, int i, int j) {

        if(j == p.length()) // Caso base, para que finalice la recursion, esto significa que llegamos al final del string en p.
        {
            return i == s.length(); // Si el patrón terminó, ¿el string también terminó?
        }

        bool firstmatch = (i < s.length() && (s[i] == p[j] || p[j] == '.'));
            // Todavia hay caractres en i && comparacion normal || comparacion especial
            if(j + 1 < p.length() && p[j + 1] == '*') 
            // Para no acceder fuera del string && para mirar si el siguiente caracter es *
            {
                return match(s, p, i, j + 2) || (firstmatch && match(s, p, i + 1, j));
// el primer caso representa que * vale 0, por eso saltamo los parametros en j + 2, primer caracter, segundo asterisco y en tercero (j+2) es donde seguimos || OPCIÓN 2: usar * una o más veces esto lo que hace, es que si tenemos el elemento * en p, no avanzamos el apuntador y mientras en s tengamos repeticiones del mismo elemento podremos seguir comparando [elemento i] vs [elemento j]*
            }

            if(firstmatch) // caso sin *
            {
                return match(s, p, i+1, j+1);
            }

        return false;
            
    }

    bool isMatch(string s, string p) {
        return match(s, p, 0, 0);
    }
};
