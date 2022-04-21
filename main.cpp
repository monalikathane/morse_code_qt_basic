#include <QCoreApplication>
#include<iostream>
#include "MorseCodeConverter.h"
#include  <bits/stdc++.h>
#include<string>





int main()
{

 //   auto converter1 = std::make_unique<MorseCodeConverter>();
    auto converter = new MorseCodeConverter();
   std:: string name;
   // std::string morsecode{ ".... . ._.. ._.. ___ _._.__" };

   std::cout<<"Enter the data to be encoded\n";
   std::getline(std::cin,name);


    std::string text{ name };

    //std::string decoded = converter->CodeToText(morsecode);
   // std::cout << "morsecode:\t" << morsecode << "\ndecoded:\t" << decoded;

    //std::cout <<"Enter data:\t"<<name <<"\ncoded:\t";

    std::cout <<"Enter data:\t"<<name;


    std::cout << "\n\n";

    std::string coded = converter->TextToCode(text);
    std::cout << "text:\t\t" << text << "\nmorsecoded:\t" << coded;

    std::cout << '\n';
    system("pause");
    return 0;

}
