#include <iostream>
#include <string>

class Solution {
public:
    int count = 0;
    int canBeTypedWords(string text, string brokenLetters) {
        bool cantype = true;
        for (int i = 0; i <= text.length(); i++) {
            if (i == text.length() || text[i] == ' ') {
                if (cantype) {
                    count++;
                }
                cantype=true;
            } else {
                for (int j = 0; j < brokenLetters.length(); j++) {
                    if (text[i] == brokenLetters[j]) {
                        cantype = false;
                        break;
                    }
                }
            }
        }
        return count;
    }
};
