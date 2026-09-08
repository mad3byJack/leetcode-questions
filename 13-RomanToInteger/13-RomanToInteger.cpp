// Last updated: 08/09/2026, 11:03:22 pm
class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        char last = s[0];
        for (char c : s) {
            switch (c) {
                case 'I':
                    total ++;
                    break;
                case 'V':
                    if (last == 'I') {
                        total += 3;
                    }
                    else {
                        total += 5;
                    }
                    break;
                case 'X':
                    if (last == 'I') {
                        total += 8;
                    }
                    else {
                        total += 10;
                    }
                    break;
                case 'L':
                    if (last == 'X') {
                        total += 30;
                    }
                    else {
                        total += 50;
                    }
                    break;
                case 'C':
                    if (last == 'X') {
                        total += 80;
                    }
                    else {
                        total += 100;
                    }
                    break;
                case 'D':
                    if (last == 'C') {
                        total += 300;
                    }
                    else {
                        total += 500;
                    }
                    break;
                case 'M':
                    if (last == 'C') {
                        total += 800;
                    }
                    else {
                        total += 1000;
                    }
                    break;
            }
            last = c;
        }
        return total;
    }
};