class Solution 
{
    public:
        bool isValidSudoku(vector<vector<char>>& board) // el & indica que no se crearan copias del tablero ademas de que se trabajara sobre el original para cada validacion.
        {
        
            for (int i = 0; i < 9; i++) // Validar filas
            {

                vector<int> frecuencia(10, 0);
        
                for (int j = 0; j < 9; j++) 
                {
            
                    char c = board[i][j];

                    if (c != '.') 
                    {
            
                        int num = c - '0';
                        if (frecuencia[num] == 1) 
                        {
                            return false;
                        }
                        frecuencia[num] = 1;
                        
                    }
                }
            }  

            for (int i = 0; i < 9; i++) // Validar columnas
            {
        
                vector<int> frecuencia(10, 0);

                for (int j = 0; j < 9; j++) 
                {
            
                    char c = board[j][i]; // es igual que en filas, solo intercambiamos los iterandos

                    if (c != '.') 
                    {
            
                        int num = c - '0';
                        if (frecuencia[num] == 1) 
                        {
                            return false;
                        }
                        frecuencia[num] = 1;
                        
                    }
                }
            } 

            for(int filaDeInicio = 0; filaDeInicio < 9; filaDeInicio += 3)
            {
                for(int columnaDeInicio = 0; columnaDeInicio < 9; columnaDeInicio += 3)
                { //Revisar cuadrado de 3x3

                    vector<int> frecuencia(10, 0);

                    for(int i = filaDeInicio; i < filaDeInicio + 3; i++)
                    {
                        for(int j = columnaDeInicio; j < columnaDeInicio + 3; j++) // par revisar cada uno de los cuadros de 3x3
                        {

                            char c = board[i][j]; // Realmente la validacion sera muy parecida o igual en los tres casos
                            if (c != '.') 
                            {
            
                                int num = c - '0';
                                if (frecuencia[num] == 1) 
                                {
                                    return false;
                                }

                                frecuencia[num] = 1;
                        
                            }

                        }
                    }

                }
            }  

            return true; // no olvidar retornar verdadero, si es que no se encontraron elementos repetidos

    }
};
