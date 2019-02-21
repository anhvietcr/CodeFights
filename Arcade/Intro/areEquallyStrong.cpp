bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    if(yourLeft == friendsRight){
        if(yourRight == friendsLeft) return true;
    }
    if(yourRight == friendsLeft){
        if(yourLeft == friendsRight) return true;
    }
    if(yourLeft == friendsLeft){
        if(yourRight == friendsRight) return true;
    }
    return false;
}
