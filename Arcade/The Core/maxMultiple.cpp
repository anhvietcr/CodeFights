int maxMultiple(int divisor, int bound) {
    for(bound; bound > 0; bound--){
        if(bound % divisor == 0){
            return bound;
        }
    }
}
