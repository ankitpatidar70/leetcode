class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0; // index to write the compressed characters
        int i = 0;

        while (i < chars.size()) {
            char ch = chars[i];
            int count = 0;

            // Count the number of repeating characters
            while (i < chars.size() && chars[i] == ch) {
                i++;
                count++;
            }

            // Write the character
            chars[idx++] = ch;

            // If count > 1, write its digits
            if (count > 1) {
                string cntStr = to_string(count);
                for (char c : cntStr) {
                    chars[idx++] = c;
                }
            }
        }

        return idx;
    }
};
