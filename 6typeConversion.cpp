#include<iostream>

int main(){
    //implicit - automatic
    //explicit - precede value wiht new data type

    /* */

    int x = 3.14; //implicit
    std::cout<<x<<"\n";

    double y = (int) 3.14; // Explicit
    std::cout<<y<<"\n";

    char c = 100;
    std::cout<<c<<"\n";

    int correct = 8;
    int questions = 10;

    // double score = correct/questions * 100;
    double score = correct/(double) questions * 100;
    std::cout<<score<<"\n";

}
