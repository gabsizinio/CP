#include <unordered_set>
#include <vector>

class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        std::vector<std::unordered_set<char>> rows(9);
        std::vector<std::unordered_set<char>> cols(9);
        std::vector<std::unordered_set<char>> boxes(9);

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char current_char = board[i][j];

                if (current_char == '.') {
                    continue;
                }

                if (!rows[i].insert(current_char).second) {
                    return false; // Duplicata encontrada na linha i.
                }
                
                if (!cols[j].insert(current_char).second) {
                    return false; // Duplicata encontrada na coluna j.
                }

                int box_index = (i / 3) * 3 + (j / 3);
                if (!boxes[box_index].insert(current_char).second) {
                    return false; // Duplicata encontrada no sub-quadrado.
                }
            }
        }

        return true;
    }
};