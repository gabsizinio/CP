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
    };

    /*
    A ideia é usar um stack para armazenar os caracteres abertos.
    Quando encontrar um caracter fechado, verifica se o topo do stack é o caracter aberto correspondente.
    Se for, remove o caracter aberto do stack.
    Se não for, retorna false.
    Se o stack estiver vazio no final, retorna true.
    Se o stack não estiver vazio no final, retorna false.
    */