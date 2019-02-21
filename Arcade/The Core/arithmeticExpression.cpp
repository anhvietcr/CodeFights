bool arithmeticExpression(int A, int B, int C) {
    if(1<=A && A<=10 && 1<=B && B<=10 && 0<=C && C<=10){
        if((A+B == C) || (A-B == C) || ((float)A/B == (float)C) || (A*B == C)){
            return true;
        }else{
            return false;
        }
    }else{
        return 0;
    }
}
