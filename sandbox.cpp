#include <iostream>
#include <meta_sloth/rand.hpp>

int main() {

        std::cout<<"test"<<std::endl;

        ChaoticMaps::Logistic eng;

        for (int i=0 ; i<1000 ; i++) {
                // std::cout<<unifrand()<<std::endl;
                std::cout<<eng.next()<<std::endl;
        }
        std::cout<<std::endl;

        return 0;
}