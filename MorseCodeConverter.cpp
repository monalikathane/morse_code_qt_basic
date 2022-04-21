#include "MorseCodeConverter.h"

#include <vector>
#include <iterator>
#include <sstream>
#include <algorithm>

auto split(const std::string &str) {
    std::vector<std::string> temporaryContainer;
    std::istringstream iss{ std::string(str) };

    std::copy(std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>{}, std::back_inserter(temporaryContainer));
    return temporaryContainer;
}

std::string MorseCodeConverter::CodeToText(const std::string &_code) {
    std::string decoded{ "" };
    std::vector<std::string> vCodes = split(_code);

    for (const auto &code : vCodes) {
        if (auto found = morseCodes.find(code); found != morseCodes.end())
            decoded.push_back(found->second);
    }
    return decoded;
}

std::string MorseCodeConverter::TextToCode(std::string &text) {
    std::string decoded{ "" };
    std::transform(text.begin(), text.end(), text.begin(), ::toupper);

    for (const auto &character : text) {
        if (auto found = std::find_if(morseCodes.begin(), morseCodes.end(), [character](const auto &value) { return value.second == character;}); found != morseCodes.end())
            decoded.append(found->first + ' ');
    }
    return decoded;
}
