int appendCharacters(char* s, char* t) {
 int j=0;
 int lenS = strlen(s);
 int lenT = strlen(t);
 for(int i=0;i<lenS;i++){
    if(j<lenT && s[i]==t[j]) j+=1;
 }
 return lenT-j;
}
