bool isPalindrome(char* s) {
    int j=0;
    int len = strlen(s);
    for(int i=0;i<len;i++){
        if (isalnum(s[i])){
            if(isupper(s[i])) s[i]=tolower(s[i]);
            s[j]=s[i];
            j++;
        }
    }
    if(j==1){return true;}
    for (int i=0; i<j/2;i++){
        if (s[i]!=s[j-i-1])return false;
    }
    return true;
}
