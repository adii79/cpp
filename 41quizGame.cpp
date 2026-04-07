#include <cctype>
#include<iostream>
#include <string>

int main(){
    const std::string questions[] = {"1. What year was C++ Created ?.","2. Who invented C++ ?.","3. What is the predecessor ?.","4. Is the Earth flat ?."};
    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
								{"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
								{"A. C", "B. C+", "C. C--", "D. B++"},
								{"A. yes", "B. no", "C. sometimes", "D. what's Earth?"}};
    char ansKeys[] = {'C', 'B', 'A', 'B'};
    char guess;
    int score = 0;

    for(int i = 0; i < sizeof(questions)/sizeof(questions[0]); i++){
        std::cout<<"===================================== \n";
        std::cout<<questions[i]<<"\n";
        std::cout<<"===================================== \n";
        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout<<options[i][j]<<"\n";
        }
        std::cin>>guess;
        guess = std::toupper(guess);
        if(guess == ansKeys[i]){
            std::cout<<"Correct \n";
            score++;
        }
        else {
            std::cout<<"wrong \n";
            std::cout<<"Answer :"<<ansKeys[i]<<"\n";
        }
    }
    std::cout<<"==================================\n";
    std::cout<<"==============RESULT==============\n";
    std::cout<<"==================================\n";
    std::cout<<"CORRECT GUESTURE: "<<score<<" \n";
    std::cout<<"# of Question: "<<sizeof(questions)/sizeof(questions[0]);
    std::cout<<"Score: "<<(score/(double)(sizeof(questions)/sizeof(questions[0]))*100);
}
