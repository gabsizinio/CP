#include <algorithm>

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        //bool ind = true;
        if(s.size() != t.size()) return false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
};

/*
A ideia aqui é usar o sort para ordenar as strings, e depois comparar se ]
as strings são iguais. Se forem, então elas tem as mesmas letras, e logo,
são anagramas.
*/