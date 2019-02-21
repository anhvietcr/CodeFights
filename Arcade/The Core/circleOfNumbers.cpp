int circleOfNumbers(int n, int firstNumber) {
    int total = firstNumber+n/2;
    if(firstNumber >= (n/2)){
        if(total == n){
                return 0;
        }else{
                return firstNumber*2-total;
        }
    }else if(firstNumber < (n/2)){
            return total;
    }
}
