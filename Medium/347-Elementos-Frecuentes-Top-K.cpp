#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // 1. CONTEO DE FRECUENCIAS:
        unordered_map<int, int> conteo; //Crear un mapa vacio (conteo)
        int n = nums.size();

        for(int num : nums){ //POR CADA numero EN nums:

            conteo[num]++;

        }

        // 2. CREAR LAS CUBETAS (BUCKETS):
        vector<vector<int>> buckets(n+1);  //Crear una lista de listas (buckets) de tamaño (N + 1)

        for(auto par : conteo){  //POR CADA (numero, frecuencia) EN conteo:

            int numero = par.first; //buckets[frecuencia].insertar_al_final(numero)         
            int frecuancias = par.second;
            buckets[frecuancias].push_back(numero);

        }


        vector<int> resultado;
        // 3. RECOLECTAR LOS TOP K:
        for(int i = n; i >= 0 && resultado.size() < k; i--){  // DESDE i = N DISMINUYENDO HASTA 0:

            for(auto num : buckets[i]){ 

                resultado.push_back(num);

                if(resultado.size() == k) break;

            }

        }

    return resultado;
        
    }
};
