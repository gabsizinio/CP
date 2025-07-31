#include <vector>
#include <string>
#include <iostream> 

class Solution {
public:
 
    std::string encode(std::vector<std::string>& strs) {
        std::string encoded_string = "";
=        for (const std::string& s : strs) {
            encoded_string += std::to_string(s.length()) + '#' + s;
        }
        return encoded_string;
    }

    std::vector<std::string> decode(std::string& s) {
        std::vector<std::string> decoded_strings;
        int i = 0; 
        while (i < s.length()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }

            int length = std::stoi(s.substr(i, j - i));

            std::string str = s.substr(j + 1, length);

            decoded_strings.push_back(str);

            i = j + 1 + length;
        }

        return decoded_strings;
    }
};

