#include <unordered_map>
#include <utility>
#include <algorithm>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        
        for(int i = 0; i < nums.size(); i++){
            if(m.find(nums[i]) != m.end()){
                m[nums[i]]++;
            }else{
                m[nums[i]] = 1;
            }
        }

        vector<pair<int,int>> v;
        for(auto x : m){
            v.push_back({x.second, x.first});
        }

        sort(v.rbegin(), v.rend());

        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(v[i].second);
        }

        return ans;
        
    }
};

/*
A ideia aqui é usar um hash map, onde a chave é o elemento, e o valor é a quantidade de vezes que ele aparece.
Depois, basta ordenar o hash map pelo valor, e retornar os k elementos mais frequentes.

Para fazer isso, usamos um vetor de pares, onde cada par possui a
quantidade de vezes que o elemento aparece, e o elemento em si.
Depois, basta ordenar o vetor de pares, e retornar os k elementos mais frequentes.
*/