struct Results {
    int N;
    int *A;
};


struct Results solution(int array[], int n, int k)
{
    struct Results result;
    int i,op = 0,np= 0,ot=0,nt=0;
    ot = array[0];
    for (i = 0; i < n; i++){
        np = (op+k)%n;
        nt = array[np];
        array[np] = ot;
        op = np;
        ot = nt;
    }
    result.A = array;
    result.N = n;
    return  result;
}
