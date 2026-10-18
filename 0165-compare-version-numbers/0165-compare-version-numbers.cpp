class Solution {
public:
    int compareVersion(string version1, string version2) {
         int i = 0, j = 0;
        int n = version1.size(), m = version2.size();
        while (i < n || j < m) {
            int start1 = i, start2 = j;
            while (i < n && version1[i] != '.') i++;
            while (j < m && version2[j] != '.') j++;
            while (start1 < i && version1[start1] == '0') start1++;
            while (start2 < j && version2[start2] == '0') start2++;
            int len1 = i - start1;
            int len2 = j - start2;
            if (len1 > len2) return 1;
            if (len1 < len2) return -1;
            while (start1 < i) {
                if (version1[start1] > version2[start2])
                    return 1;
                if (version1[start1] < version2[start2])
                    return -1;
                start1++;
                start2++;
            }
            i++;
            j++;
        }
        return 0;
    }
};