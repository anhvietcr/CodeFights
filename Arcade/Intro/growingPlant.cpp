int d, temp, growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    if(upSpeed>desiredHeight) return 1;
    while(temp < desiredHeight){ 
        temp += upSpeed-downSpeed ;
        ++d;
    }
    return d-1;
}
