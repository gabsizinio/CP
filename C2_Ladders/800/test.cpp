#include <iostream>
#include <vector>

using namespace std;

// Função para aplicar uma atualização em intervalo utilizando a técnica de diferenciação
void range_update(vector<int> &arr, int l, int r, int val)
{
    arr[l] += val; // Incrementa val no início do intervalo
    if (r + 1 < arr.size())
    {
        arr[r + 1] -= val; // Decrementa val logo após o fim do intervalo
    }
}

// Função para aplicar o prefix sum no vetor, resultando nas atualizações corretas
void apply_prefix_sum(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); ++i)
    {
        arr[i] += arr[i - 1]; // Calcula o somatório prefixado
    }
}

int main()
{
    // Inicializa o vetor com 8 elementos
    vector<int> arr(8, 0);

    // Exemplo de atualização: somar 1 de arr[2] até arr[6] (terceiro ao sétimo elemento)
    int l = 2; // índice do terceiro elemento
    int r = 6; // índice do sétimo elemento
    int val = 1;

    // Aplica a atualização no intervalo
    range_update(arr, l, r, val);

    // Aplica o prefix sum para propagar a atualização
    apply_prefix_sum(arr);

    // Imprime o resultado final
    cout << "Vetor após as atualizações: ";
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
