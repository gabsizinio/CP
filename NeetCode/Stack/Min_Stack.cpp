#include <stack>
#include <algorithm>

class MinStack {
private:
    std::stack<int> data_stack; // Pilha para todos os elementos
    std::stack<int> min_stack;  // Pilha para rastrear os mínimos

public:
    MinStack() {
    }
    
    void push(int val) {
        // Sempre empilha na pilha principal
        data_stack.push(val);
        
        // Empilha na pilha de mínimos apenas se for um novo mínimo (ou igual)
        if (min_stack.empty() || val <= min_stack.top()) {
            min_stack.push(val);
        }
    }
    
    void pop() {
        // Antes de remover da pilha principal, verifica se o elemento
        // é o mínimo atual. Se for, remove da pilha de mínimos também.
        if (data_stack.top() == min_stack.top()) {
            min_stack.pop();
        }
        data_stack.pop();
    }
    
    int top() {
        return data_stack.top();
    }
    
    int getMin() {
        // O mínimo é sempre o topo da pilha de mínimos.
        return min_stack.top();
    }
};
