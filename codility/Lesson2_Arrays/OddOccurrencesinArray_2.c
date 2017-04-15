int solution (int array[], int N)
{
    int flag = 0,temp = 0;
    int i;
    
    if (N%2 != 1)
        return -1;
    
    for (int k = 0;k<N;k++)
        printf("%d ",array[k]);
    printf("\n");
    
    do{
        flag = 0;
        for(i = 0; i<N-1; i++) {
            if (array[i] > array[i+1]) {
                temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
                flag = 1;
            }
        }
    }while(flag == 1);
 
    flag = 0;
    for (i = 0; i < N; i++){
        
        if (i == N-1) {  //Last item case
            temp = array[i];
            break;
        } else if (i==0 && (array[i] != array[i+1])) { //First item case
            temp = array[0];
            break;
        } else if (array[i] == array[i+1]) {
            flag = 1;
            continue;
        } else if ((array[i] != array[i+1]) && flag) {
            flag = 0;
        } else if ((array[i] != array[i+1]) && !flag) {
            temp = array[i];
            break;
        }
    }
    
    return  temp;

}
