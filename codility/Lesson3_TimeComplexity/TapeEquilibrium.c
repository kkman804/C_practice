int solution(int a[], int n){
    int i,min = 0,minTemp = 0,total = 0;
    int sum1 = 0,sum2 = 0;
    
    for (i = 0; i < n; i++){
        total = a[i]+total;
    }
    
    for (i = 0; i < n-1; i++){
        sum1 = a[i]+sum1;
        sum2 = total - sum1;
        
        minTemp = (sum1 - sum2) < 0 ? (sum1 - sum2)*(-1) : (sum1 - sum2);
        if (i == 0)
            min = minTemp;
        min = min < minTemp? min:minTemp;
    }
    return min;
}
