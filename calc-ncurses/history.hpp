#ifndef HISTORY_HPP
#define HISTORY_HPP

#include <string>
#include <vector>

std::vector<std::string> loadHistory(const std::string &fileName);
void saveHistory(const std::string &fileName, const std::vector<std::string> &history);

#endif
