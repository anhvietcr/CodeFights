bool isInfiniteProcess(int a, int b) {
    if(0<=a && a<=20 && 0<=b && b<=20){
        if(b >= a && ((b-a) % 2 == 0)){
            return false;
        }else if(a%2 == 0 || b%2 == 0){
            return true;
        }else{
            return true;
        }
    }else{
        return 0;
    }

}
