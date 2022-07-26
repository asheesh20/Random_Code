class Solution {
    private:
    bool equal(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]) return 0;
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int a[26]={0},num;
        for(int i=0;i<s1.size();i++){
            num=0;
            num=s1[i]-'a';
            a[num]++;
        }
        int i=0,windowsize=s1.size();
        int c1[26]={0};
        while(i<windowsize && i<s2.size()){
            int index=0;
            index=s2[i]-'a';
            c1[index]++;
            i++;
        }
        if(equal(a,c1)) return 1;
        while(i<s2.size()){
            char newchar=s2[i];
            int index=0;
            index=newchar-'a';
            c1[index]++;
            char oldchar=s2[i-windowsize];
            index=oldchar-'a';
            c1[index]--;
            i++;
            if(equal(a,c1)) return 1;
        }
        return 0;
    }
};