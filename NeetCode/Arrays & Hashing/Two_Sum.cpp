#include <map>
#include <iostream>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            if(m.find(target-nums[i])!=m.end()){
                //cout << m[target-nums[i]] << " " << i << "\n";
                ans.push_back(m[target - nums[i]]);
                ans.push_back(i);
                
                break;
            }else{
                m[nums[i]] = i;
            }
        }        
        return ans;
    }
};

/*
A ideia aqui é usar um hash map, ele vai armazenar os elementos do array
como chave, e sua posição como valor. Quando um novo elemento for visitado,
basta verificar se o complemento do elemento (target - nums[i]) existe no hash map.
Se existir, então podemos retornar o valor da chave (posição do complemento) e a posição
do elemento atual.
*/