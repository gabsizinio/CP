#include <unordered_map>
#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;

        for(int i = 0; i < strs.size(); i++){
            string cop = strs[i];

            sort(cop.begin(), cop.end());

            if(m.find(cop) != m.end()){
                m[cop].push_back(strs[i]);
            }else{
                vector<string> v = {strs[i]};
                m[cop] = v;
            }
        }

        vector<vector<string>> ans;
        for(auto x: m){
            ans.push_back(x.second);
        }

        return ans;
    }
};

/*
A ideia aqui é usar um hash map, onde a chave é a string ordenada, e o valor é um vector de strings.
Quando um novo elemento for visitado, basta verificar se a string ordenada (seu anagrama) já existe no hash map.
Se existir, basta adicionar o elemento atual ao vector de strings. Se não existir, basta criar um novo vector
com o elemento atual e adicionar ao hash map.
*/