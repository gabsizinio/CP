#include <unordered_map>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,pair<int,int>> m;

        for(int i = 0; i < nums.size(); i++){
            if (m.count(nums[i])) {
                continue;
            }
            if(m.find(nums[i] - 1) == m.end() && m.find(nums[i] + 1) == m.end()){
                m[nums[i]] = {nums[i], nums[i]};
            }else{
                if(m.find(nums[i] - 1) != m.end() && m.find(nums[i] + 1) == m.end()){
                    m[nums[i]] = {m[nums[i] - 1].first, nums[i]};
                    m[nums[i] - 1].second = nums[i];
                    m[m[nums[i] - 1].first].second = nums[i];
                }else if(m.find(nums[i] + 1) != m.end() && m.find(nums[i] - 1) == m.end()){
                    m[nums[i]] = {nums[i], m[nums[i]+1].second};
                    m[nums[i] + 1].first = nums[i];
                    m[m[nums[i] + 1].second].first = nums[i];
                }else{
                    m[nums[i]] = {m[nums[i] - 1].first, m[nums[i] + 1].second};
                    m[nums[i] - 1].second = m[nums[i] + 1].second;
                    m[m[nums[i] - 1].first].second = m[nums[i] + 1].second;
                    m[nums[i] + 1].first = m[nums[i] - 1].first;
                    m[m[nums[i] + 1].second].first = m[nums[i] - 1].first;
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(m[nums[i]].second - m[nums[i]].first + 1 > ans){
                ans = m[nums[i]].second - m[nums[i]].first + 1;
            }
        }
        // [0,3,7,2,5,8,4,6,0,1]
        // 0 - {0,0}
        // 3 - {2,3}
        // 7 - {7,7}
        // 2 - {2,3}
        // 5 - {}

        return ans;
    }
};

/*
A estratégia central é usar um hash map (unordered_map) para rastrear os limites de cada sequência consecutiva encontrada até o momento. Para qualquer número x que seja uma borda de uma sequência, o mapa armazena o par {início, fim} dessa sequência.

O funcionamento pode ser dividido em três etapas:

    Processar cada número único: O código percorre a lista de entrada, ignorando números duplicados para evitar trabalho desnecessário.

    Estender ou Fundir Sequências: Para cada novo número, ele verifica no mapa se seus vizinhos (num-1 e num+1) já existem. Com base nisso, ele executa uma de três ações:

        Cria uma nova sequência: Se não houver vizinhos, uma nova sequência de tamanho 1 é criada.

        Estende uma sequência: Se houver um vizinho, a sequência existente é estendida para incluir o novo número.

        Funde duas sequências: Se houver vizinhos de ambos os lados, as duas sequências são unidas em uma só.

    Atualizar as Bordas: Este é o passo crucial. Toda vez que uma sequência é estendida ou fundida, o código atualiza a informação de {início, fim} não apenas nos vizinhos imediatos, mas também nas verdadeiras extremidades da nova e mais longa sequência. Isso garante que o mapa sempre tenha a informação correta nos pontos mais importantes.

Após processar todos os números, um loop final percorre o mapa para calcular o comprimento de todas as sequências (fim - início + 1) e retorna o maior valor encontrado.
*/