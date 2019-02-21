int depositProfit(int deposit, int rate, int threshold) {
    if(1 <= deposit && deposit <= 100 && 1<= rate && rate <= 100 && deposit < threshold <= 200){
        int i = 0;
        double sum = (double)deposit;
        while(sum < threshold){
            sum += (rate*sum/100);
            i++;
        }
        return i;
    }return 0;
}
