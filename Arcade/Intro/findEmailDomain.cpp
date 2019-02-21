std::string findEmailDomain(std::string address) {
    int pos = address.find_last_of('@'); //tim vi tri @ cuoi cung
    return address.substr(pos+1);
}
