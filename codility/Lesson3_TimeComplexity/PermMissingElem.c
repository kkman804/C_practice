int solution(int array[], int n)
{
    int  total = 0;
    if (n == 0)
        return 1;
    
    total = (1+(n+1))*(n+1)/2;
    for(int i = 0; i < n; i++){
        total = total - array[i];

    }
    return  total;
}
