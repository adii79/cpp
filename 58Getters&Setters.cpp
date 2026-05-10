#include<iostream>
class stove{
    private:
        int temprature = 0;
    public:
        int getTemp(){
            return this->temprature;
        }
        void setTemp(int temp){
            if (temp < 0){
                this->temprature = 0;
            }
            else{
                this-> temprature = temp;
            }
        }
};
int main(){
   stove ss ;
  std::cout<<ss.getTemp()<<" ";
  ss.setTemp(30);
  std::cout<<ss.getTemp()<<" \n";
  std::string a = "hi ";
     std::string b = "there";

     std::cout << operator+(a, b);
}
