#include <iostream>
#include <random>
#include <chrono>

/*
 (Mersenne Twister Algorithim)
 Make uniform random numbers in range [0,1]
*/
double unifrand() {
    static std::random_device rd;
    static auto seed = rd() ^ 
                       std::chrono::steady_clock::now().time_since_epoch().count();
    static std::mt19937 gen(seed);
    static std::uniform_real_distribution<double> dis(0.0, 1.0);
    return dis(gen);
}