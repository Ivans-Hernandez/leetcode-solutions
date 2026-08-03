/* 
crear mapa
para cada palabra en strs
    copia = palabra
    ordenar(copia)
    mapa[copia].agregar(palabra)
crear respuesta
para cada elemento del mapa
    respuesta.agregar(elemento)
regresar respuesta
*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
    unordered_map< string, vector<string> > mp;

    for(int i = 0; i < strs.size(); i++){
        string copia = strs[i];
        sort(copia.begin(), copia.end());
        mp[copia].push_back(strs[i]);
    }
    vector<vector<string>> respuesta;
    for(auto elemento : mp) respuesta.push_back(elemento.second); 
    return respuesta;
    } 
};
