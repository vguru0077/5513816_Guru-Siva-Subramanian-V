#include <stdio.h>
#include <string.h>

char* isValid(char* s) {
    int f[26] = {0};
    int fcount[100001] = {0};
    int len = strlen(s);
    int minf = 100001, maxf = 0;
    
    for (int i = 0; i < len; ++i) {
        f[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; ++i) {
        if (f[i] > 0) {
            fcount[f[i]]++;
            if (f[i] < minf) minf = f[i];
            if (f[i] > maxf) maxf = f[i];
        }
    }

    if (minf == maxf)
        return "YES";

    if (minf == 1 && fcount[minf] == 1 && fcount[maxf] * maxf + 1 == len)
        return "YES";

    if ((maxf - minf == 1) && fcount[maxf] == 1)
        return "YES";

    return "NO";
}

int main() {
    char s[100001];
    scanf("%s", s);
    printf("%s\n", isValid(s));
    return 0;
}
