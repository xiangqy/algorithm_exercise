#include "log/log_setting.h"

void bubbling(std::vector<int>& sort_data) {
  if (sort_data.size() < 2) return;
  for (auto i = 0; i < sort_data.size() - 1; ++i) {
    for (auto j = i + 1; j < sort_data.size(); ++j) {
      if (sort_data[i] > sort_data[j]) {
        std::swap(sort_data[i], sort_data[j]);
      }
    }
  }
}

int main(int argc, char** argv) {
  std::vector<int> sort_data = {4, 1, 2, 3};
  LogInfo("Before sort {}", sort_data);
  bubbling(sort_data);
  LogInfo("After sorted {}", sort_data);
  return 0;
}