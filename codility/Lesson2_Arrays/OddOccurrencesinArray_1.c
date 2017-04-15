int solution (int array[], int N){
    
    int i,j,temp = 0,flag = 0;
    
    for(i = 0; i < N; i++){
        flag = 0;
        
        if (i == N-1) {
            temp = array[i];
            break;
        }
        if (array[i] == -1)
            continue;
        for(j = i+1; j < N; j++){
            if (array[j] == -1)
                continue;
            if (array[i] == array[j]) {
                array[i] = -1;
                array[j] = -1;
                flag = 1;
                break;
            }
        }
    
        if (!flag){
            temp = array[i];
            break;
        }
    }
    return temp;
}
