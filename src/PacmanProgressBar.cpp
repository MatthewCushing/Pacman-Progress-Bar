#include "PacmanProgressBar.h"

void progressBar(std::uint32_t index, std::uint32_t totalIterations) {
  std::uint32_t percentage{0};

  percentage = (std::uint32_t)(
      floor((((double)index + 1) / (double)totalIterations) * 100));

  if (percentage % 2 == 0) {
    std::cout << "\r[" << std::string(percentage, '-') + 'C';
  } else {
    std::cout << "\r[" << std::string(percentage, '-') + 'c';
  }

  for (; percentage < 100; ++percentage) {
    if (percentage % 2 == 0) {
      std::cout << ' ';
    } else {
      std::cout << '*';
    }
  }

  std::cout << "] "
            << floor((((double)index + 1) / (double)totalIterations) * 100)
            << "%" << std::flush;
}