#ifndef FILTER_HPP
#define FILTER_HPP
#include <vector>


template<typename C, typename P> // C(Container), P(Predikat) 

C filter (C const& c, P const& pred){
    C result;
    for (auto &i : c) {
  		if (pred(i)) {
  			result.push_back(i);
  		}
  	}

    return result;
  }

#endif // FILTER_HPP