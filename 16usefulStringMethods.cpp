#include<iostream>

int main(){
    std::string name = "Adi";
    int len = name.length();


    std::cout<<typeid(len).name()<<" "<<len<<'\n';
    std::cout<<typeid(name.empty()).name()<<" "<<name.empty()<<'\n';
    name.clear();
    std::cout<<typeid(name.empty()).name()<<" "<<name.empty()<<'\n';
    // std::cout<<typeid(name.clear()).name()<<" "<<name.clear()<<'\n';
    name.append("answara");
    std::cout<<name.at(0)<<" "<<'\n';
    name.insert(0,"A");
    name.find("w");
    name.append(" :)!");
    std::cout<<name<<" "<<name.length()<<'\n';
    name.erase(11,12);
    std::cout<<name<<" "<<name.length()<<'\n';


}
