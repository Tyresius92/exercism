#pragma once

#include <string>
#include <exception>

namespace transcription {
        char to_rna(char input);

        std::string to_rna(std::string input); 
}