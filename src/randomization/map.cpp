#include <meta_sloth/rand.hpp>
#include <algorithm>  // برای std::clamp

namespace ChaoticMaps {

        Logistic::Logistic(double start, double r) 
        : value(std::clamp(start, 0.0, 1.0)), 
        r(std::clamp(r, 0.0, 4.0)) {}

        double Logistic::next() {
                double current = value.load(std::memory_order_acquire);
                double next_val = r * current * (1.0 - current);
                value.store(next_val, std::memory_order_release);
                return next_val;
        }

} // namespace ChaoticMaps