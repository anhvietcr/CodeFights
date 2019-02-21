
std::vector<std::string> fileNaming(std::vector<std::string> names) {
//ý tưởng
//ta tạo mảng phụ để lưu kết quả
//mỗi phần tử mảng chính lại đi qua toàn bộ p.tử mảng phụ
//nếu chưa tồn tại thì đưa vào mảng phụ
//ngược lại thì tiếp tục xử lý tăng biến đếm và đưa vào mảng phụ
    bool flag = false;
    std::vector<std::string> save;
    for(int i = 0; i < names.size(); i++){
        //kiểm tra tồn tại trong mảng đã lưu hay chưa
        for(int j = 0; j < save.size(); j++){
            if(names[i] == save[j]){
                //tìm thấy
                flag  = true; 
            }
        }
        if(flag){
        //nếu tìm thấy trong mảng đã lưu
            int dem = 1;
            for(int j = 0; j < save.size(); j++){
                //giả định chuỗi mới
                std::string s = names[i] + "(" + std::to_string(dem) + ")";
                //duyệt toàn bộ mảng để chắc chắn chưa lưu
                for(int j2 = 0; j2 < save.size(); j2++){
                    if(s == save[j2]){
                        //nếu đã tồn tại thì tăng đếm
                        ++dem;
                    }
                }
            }
            std::string str = names[i] + "(" + std::to_string(dem) + ")";
            save.push_back(str);
            flag = false;   
        }else{
            //ngược lại thì đưa vào mảng lưu
            save.push_back(names[i]);
            flag = false;
        }
    }
    return save;
}