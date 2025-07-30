#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,bool> m;

        for(int i = 0; i < nums.size(); i++){
            if(m.find(nums[i]) != m.end()){
                return true;
            }else{
                m[nums[i]] = true;
            }
        } 

        return false;
    }
};

/*
A ideia aqui é usar um hash map, para armazenar os elementos do array que
já foram visitados, dessa forma, quando um novo elemento for visitado,
basta verificar se o elemento já existe no hash map, se existir, 
significa que o array contém um elemento duplicado, e podemos retornar true.
*/