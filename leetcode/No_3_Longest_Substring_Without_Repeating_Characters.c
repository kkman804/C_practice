int isdupilicat(char*,char,int);
int lengthOfLongestSubstring(char* s) {
     int len = 0,temp_cout = 0,count = 0,i,j;
    char *str;
    str = (char*) malloc(sizeof(char*));
    str = s;

    while(*(str+len) != '\0') {len++;}
    if (len==1) return len;
    
    for (i=0;i<len-1;i++) {
        str = s+i;
        temp_cout = 1;
        for (j=i+1;j<len;j++){

            if(isdupilicat(str,*(s+j),temp_cout)) {
                *(str+temp_cout) = *(s+j);
                temp_cout++;
            } else {
                str = NULL;
                break;
            }
        }
        count = count > temp_cout? count:temp_cout;
    }
    return count;
}

int isdupilicat(char *s,char c,int len){
    // same return 0;
    int isSame = 1;
    if (len == 0) return isSame;
    for(int i = 0; i <len; i++){
        if(*(s+i) == c) {
            isSame = 0;
            break;
        }
    }
    return isSame;
}
