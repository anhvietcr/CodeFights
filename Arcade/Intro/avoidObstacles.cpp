int avoidObstacles(std::vector<int> in) {
    if(2 <= in.size() && in.size() <= 10){
        int jum = 2, count = 0;
        for(auto i : in){
            for(auto j : in){
                if(j % jum == 0) { ++jum; break;}
                else { ++count;}
            }
            if(count == in.size()) return jum;
            count = 0;
        }
        return jum;
    }else return 0;
}
