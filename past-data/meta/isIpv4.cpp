bool solution(string s) {

    string del = ".";
    string str = "";
    string str2 = "";
    int a;
    int start = 0;
    int end = s.find(del);
    int count = 0;
    str2 = s.substr(start, end - start);
    while (end != -1) {
        str = s.substr(start, end - start);
        cout << "str: '" << str <<"'" << endl;
        
        if (str.size() == 0) return false;

        for (int i = 0; i < str.size(); i++) {
            if ( str[i] < '0' || str[i] > '9') return false;
        }
        
        a = atoi( str.c_str() );
        if (a < 0 || a > 255) return false;
        
        cout <<"a: " << a << endl;
        count++;
        start = end + 1;
        end = s.find(del, start);         
    }
    str = s.substr(start, end - start);
    cout << str << endl;
   
    if (str.size() > 1 || str.size() < 1) return false;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] < '0' || str[i] > '9') return false;
    }    
    a = atoi( str.c_str() );
    if (a < 0 || a > 255) return false;
    
    count++;
    
    cout << "count: " << count << endl;
    
    if (count != 4) return false;
    return true;
}
