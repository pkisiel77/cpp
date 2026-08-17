#ifndef HISTORY_HPP
#define HISTORY_HPP

#include <string>
#include <vector>

void showHistory(const std::vector<std::string> &history);
void saveHistory(const std::vector<std::string> &history, const std::string &fileName);
std::vector<std::string> loadHistory(const std::string &fileName);
void clearHistory(std::vector<std::string> &history, const std::string &fileName);
void appendHistoryEntry(const std::string &entry, const std::string &fileName);

#endif
