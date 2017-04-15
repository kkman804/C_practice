//BinaryGap
int solution (int n)
{
    int count =0,temp = 0;
    int flag = 0;
    while(n/2 != 0)
    {
        if (n%2 == 1 && flag == 0) {
            flag = 1;
        } else if (n%2 == 1 && flag == 1 ) {
            if ( count > temp)
                temp = count;
            count = 0;
        }
            
        if (n%2 == 0 && flag == 1){
            count++;
        }
        n = n/2;
    }
    return count > temp ? count:temp;
}
