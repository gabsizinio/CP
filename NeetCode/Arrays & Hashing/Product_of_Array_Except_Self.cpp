class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int prod = 1;
            if(prod == 0){
                prod = nums[1];
                
            }
    
            bool flag = false, flag2 = false;
    
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == 0 && flag == false){
                    flag = true;
                    continue;
                }else if(nums[i] == 0 && flag == true){
                    flag2 = true;
                    continue;
                }
                prod *= nums[i];
            }
    
            vector<int> ans;
    
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == 0){
                    if(flag == true && flag2 == false){
                        ans.push_back(prod);
                    }else if(flag && flag2){
                        ans.push_back(0);
                    }
                    continue;
                }
                if(flag || flag2){
                    ans.push_back(0);
                    continue;
                }
                ans.push_back(prod/nums[i]);
            }
    
            return ans;
        }
    };

/*
A ideia é que a gente multiplique todos os numeros do array e depois divida pelo numero atual.

Mas temos que ter cuidado com o 0, pois se tivermos 0 no array, a gente nao pode dividir por 0.

Então a gente tem que verificar se temos 0 no array.

Se tivermos 0 no array, a gente tem que verificar se temos mais de um 0.

Se tivermos mais de um 0, a gente tem que retornar um array com todos os 0.

Se tivermos apenas um 0, a gente tem que retornar um array com todos os 0, exceto o indice do 0.    

Se nao tivermos 0 no array, a gente pode multiplicar todos os numeros do array e depois dividir pelo numero atual.

*/