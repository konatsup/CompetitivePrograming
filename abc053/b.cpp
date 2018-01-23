#include <bits/stdc++.h>
int main() {
    std::string s;
    std::cin >> s;
    std::string::size_type pos_a = 0;
    std::string::size_type pos_z = s.size()-1;
    while ((pos_a = s.find("A", pos_a)) != std::string::npos) {
        while ((pos_z = s.rfind("Z", pos_z)) != std::string::npos) {
            std::cout << (pos_z - pos_a +1) << std::endl;
            return 0;
        }
    }
}

//# answer1(8ms,112Byte)
//main(){
//    std::cin>>s;
//    std::cout<<s.rfind('Z')-s.find('A')+1<<'\n';
//}

//# answer2(1ms,200Byte)
//int main(int argc,char **argv){
//    char s[200000];
//    scanf("%s",s);
//    int ans;
//
//    ans=strrchr(s,'Z')-strchr(s,'A');
//
//    printf("%d",ans+1);
//    return 0;
//}