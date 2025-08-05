#include <vector>
#include <string>
#include <stack>

class Solution {
public:
    int evalRPN(std::vector<std::string>& tokens) {
        // Usar 'long' na pilha previne overflow em casos de teste com números grandes.
        std::stack<long> s;

        for (const std::string& token : tokens) {
            // Verifica se o token é um dos operadores
            if (token == "+") {
                long op2 = s.top(); s.pop();
                long op1 = s.top(); s.pop();
                s.push(op1 + op2);
            } else if (token == "-") {
                long op2 = s.top(); s.pop();
                long op1 = s.top(); s.pop();
                s.push(op1 - op2);
            } else if (token == "*") {
                long op2 = s.top(); s.pop();
                long op1 = s.top(); s.pop();
                s.push(op1 * op2);
            } else if (token == "/") {
                long op2 = s.top(); s.pop();
                long op1 = s.top(); s.pop();
                s.push(op1 / op2);
//                 std::cout << op1 << "/" << op2 << std::endl;
            } else {
                // Se não for um operador, é um número.
                // Converte a string para long e empilha.
                s.push(std::stol(token));
            }
        }

        // O resultado final é o único elemento que resta na pilha.
        return s.top();
    }
};

/*
A ideia é usar um stack para armazenar os números.
Quando encontrar um operador, retira os dois últimos números da pilha, realiza a operação e empilha o resultado.
No final, o resultado final é o único elemento que resta na pilha.
*/