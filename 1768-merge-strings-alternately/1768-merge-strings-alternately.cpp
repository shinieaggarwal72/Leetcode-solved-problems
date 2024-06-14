class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        int total_len = n+m;
        int i, j;
        string merge;
        int k=0;
        merge.resize(total_len, ' ');

        for(i=j=0; word1[i]!='\0' && word2[j]!='\0'; i++, j++){
            merge[k++] = word1[i];
            merge[k++] = word2[j];
        }
            while(word1[i]!='\0')merge[k++]=word1[i++];
            while(word2[j]!='\0')merge[k++]=word2[j++];
        
        return merge;
    }
};