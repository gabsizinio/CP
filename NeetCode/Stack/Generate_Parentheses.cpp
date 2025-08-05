vector<string> ans;

class Solution {
public:

        bool isValid(string s) {
          vector<char> st;
    
          bool ind = true;
    
          for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push_back('(');
            }else if(s[i] == '['){
                st.push_back('[');
            }else if(s[i] == '{'){
                st.push_back('{');
            }else if(s[i] == ')'){
                if(st.size() == 0){
                    ind = false;
                    break;
                }
                if(st[st.size() - 1] == '('){
                    st.pop_back();
                }else{
                    ind = false;
                    break;
                }
            }else if(s[i] == ']'){
                            if(st.size() == 0){
                    ind = false;
                    break;
                }
                if(st[st.size() - 1] == '['){
                    st.pop_back();
                }else{
                    ind = false;
                    break;
                }
            }else if(s[i] == '}'){
                            if(st.size() == 0){
                    ind = false;
                    break;
                }
                if(st[st.size() - 1] == '{'){
                    st.pop_back();
                }else{
                    ind = false;
                    break;
                }
            }
          }  
          if(ind == false || st.size() > 0){
            return false;
          }else{
            return true;
          }
        }

    void generateAll(string act, int n){
        if(act.size() == 2*n){
            if(isValid(act) == true){
                ans.push_back(act);
            }

            return;
        }

        generateAll(act + '(', n);
        generateAll(act + ')', n);
    } 

    vector<string> generateParenthesis(int n) {
        ans.clear();
        generateAll("", n);
        return ans;
    }
};

/* 
A ideia é usar uma função recursiva para gerar todas as combinações de parênteses válidos.
A função isValid verifica se uma string é uma combinação de parênteses válida.
A função generateAll gera todas as combinações de parênteses válidos.
A função generateParenthesis retorna todas as combinações de parênteses válidos.
*/