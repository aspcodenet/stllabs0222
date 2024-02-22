#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iostream>


void lab2(){
    std::vector<std::string> allCars;
    
    std::ifstream infile(".\\cars.txt", std::ios::in);

    std::string line;
	while (getline(infile, line))
    {
		if (!line.empty())
        {
			allCars.push_back(line);    
        }
    }

    std::for_each(std::begin(allCars),std::end(allCars),[](std::string line){
        std::cout << line << ",";
    });
    std::cout  << std::endl;


}


/*
Write a program which creates a vector<char> which stores the letters a-z in order. 
Sort in order. Print all elements with a ’,’ between using for_each
Sort in reverse. Print all elements with a ’,’ between using for_each
*/
void lab1(){
    std::vector<char> allChars;
  
    for(char ch = 'z'; ch >= 'a';ch--){
        allChars.push_back(ch);    
    }

    std::sort(std::begin(allChars),std::end(allChars),[](char ch1, char ch2){
        return ch1 < ch2;
    });




    
    for(char ch : allChars){
        std::cout << ch << ",";
    }
    std::cout << std::endl;


    std::sort(std::begin(allChars),std::end(allChars),[](char ch1, char ch2){
        return ch1 > ch2;
    });
    
    for_each(std::begin(allChars),std::end(allChars),[](char ch){
        std::cout << ch << ",";
    });

    std::cout << std::endl;


}


int main(){
    lab2();
    lab1();
    return 0;
}