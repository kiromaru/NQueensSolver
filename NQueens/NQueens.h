#pragma once

void TimeSolver(std::chrono::time_point<std::chrono::steady_clock> &start, std::vector<std::string> &result, std::common_type_t<std::chrono::nanoseconds, std::chrono::nanoseconds> &elapsed, long long &milliseconds);
