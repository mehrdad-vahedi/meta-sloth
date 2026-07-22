#pragma once

#ifndef SLOTH_RAND_HPP
#define SLOTH_RAND_HPP

#include <atomic>


double unifrand(); //TODO put rand in Uniform namespace
namespace ChaoticMaps {

        /*
        Logistic Map
        X[n+1] = r * x[n] * (1-x[n])
        r in [0.0, 4.0], default: 4.0
        start in [0,1] default: 0.7
        */
        class Logistic {
                private:
                std::atomic<double> value;
                const double r;

                public:
                Logistic(double start = 0.7, double r = 4.0);
                double next();
        };

} // namespace ChaoticMaps

#endif // SLOTH_RAND_HPP