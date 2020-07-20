#pragma once

#include <vector>

std::vector<std::string> split(std::string str, char spl) {
    std::vector<std::string> result;
    std::string tmp;
    for (char i: str) {
        if (i != spl) {
            tmp.push_back(i);
        } else {
            result.push_back(tmp);
            tmp = {};
        }
    }
    result.push_back(tmp);
    return result;
}