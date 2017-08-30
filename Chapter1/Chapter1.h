//
// Created by sf on 2017/8/30.
//

#ifndef CPP_PRIMER_CHAPTER1_H
#define CPP_PRIMER_CHAPTER1_H

#include <iostream>
class Chapter1 {
private:
    int v1,v2;
public:
    int whileTest(){
        int sum=0,val=1;
        while(val<=10){
            sum+=val;
            val++;
        }
        std::cout<<sum<<std::endl;
    }
public:
    int sum(){
        std::cout<<"Enter two numbers:"<<std::endl;
        std::cin>>v1>>v2;
        std::cout<<"The sum of them is "<<v1+v2<<std::endl;
    }

};


#endif //CPP_PRIMER_CHAPTER1_H
