#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <cctype>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <sstream>

#ifndef COLORS
#define COLORS

#define RESET "\033[0m"
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"

#endif

class BitcoinExchange
{
private:
    std::vector<std::vector<std::string> > db_lines;
    std::vector<std::vector<std::string> > flines;

public:
    BitcoinExchange();
    BitcoinExchange(std::string const &, std::string const &);
    BitcoinExchange(const BitcoinExchange &);
    ~BitcoinExchange();

    BitcoinExchange &operator=(BitcoinExchange const &);
    void Debug() const;
    void analize() const;
};
