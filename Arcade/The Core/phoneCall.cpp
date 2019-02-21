int phoneCall(int min1, int min2_10, int min11, int s) {
    int time = 0;
    if (s < min1) {
        return 0;
    }
    s -= min1;  time += 1;
    while( time <= 9){
        if(s < min2_10){
            return time;
        }
        time += 1;
        s -= min2_10;
    }
    if(s >= min11){
        time += s/min11;
    }
    return time;
    
}
