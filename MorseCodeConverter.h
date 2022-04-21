#pragma once
#include <string>
#include <unordered_map>

class MorseCodeConverter final {
public:
    explicit MorseCodeConverter() = default;

    std::string CodeToText(const std::string &);
    std::string TextToCode(std::string &);

private:
    std::unordered_map<std::string, char> morseCodes {
        { "._"  , 'A' }, { "_."  , 'N' },
        { "_...", 'B' }, { "___" , 'O' },
        { "_._.", 'C' }, { ".__.", 'P' },
        { "_.." , 'D' }, { "__._", 'Q' },
        { "."   , 'E' }, { "._." , 'R' },
        { ".._.", 'F' }, { "..." , 'S' },
        { "__." , 'G' }, { "_"   , 'T' },
        { "....", 'H' }, { ".._" , 'U' },
        { ".."  , 'I' }, { "..._", 'V' },
        { ".___", 'J' }, { ".__" , 'W' },
        { "_._" , 'K' }, { "_.._", 'X' },
        { "._..", 'L' }, { "_.__", 'Y' },
        { "__"  , 'M' }, { "__..", 'Z' },

        { ".____", '1' }, { "_....", '6' },
        { "..___", '2' }, { "__...", '7' },
        { "...__", '3' }, { "___..", '8' },
        { "...._", '4' }, { "____.", '9' },
        { ".....", '5' }, { "_____", '0' },

        { "._._._",  '.' }, { "_._.__",  '!' },
        { "__..__",  ',' }, { "_...._",  '-' },
        { ".____.", '\'' }, { "._._." ,  '+' },
        { "._.._.",  '"' }, { "_.._." ,  '/' },
        { "..__._",  '_' }, { "_.__." ,  '(' },
        { "___...",  ':' }, { "_.__._",  ')' },
        { "_._._.",  ';' }, { "_..._" ,  '=' },
        { "..__..",  '?' }, { ".__._.",  '@' } };
};

