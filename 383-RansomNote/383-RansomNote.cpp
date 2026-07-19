// Last updated: 7/19/2026, 10:22:49 PM
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ransomNoteSize = ransomNote.size();
        int magazineSize = magazine.size();
        if (ransomNoteSize > magazineSize) {
            return false;
        }
        int characters_occurrences[26] = {0};
        for (int i = 0; i < magazineSize; i++) {
            characters_occurrences[magazine[i] - 97]++;
        }
        for (int i = 0; i < ransomNoteSize; i++) {
            if (characters_occurrences[ransomNote[i] - 97] == 0) {
                return false;
            }
            characters_occurrences[ransomNote[i] - 97]--;
        }
        return true;
    }
};