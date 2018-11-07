#pragma once

#include <string>
#include <algorithm>
#include <exception>

namespace atbash {
        std::string encode(std::string input);

        std::string decode(std::string input); 
}