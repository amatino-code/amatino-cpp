//
//  denomination.hpp
//  Amatino
//
//  Created by Hugh Jeremy on 19/4/19.
//  Copyright © 2019 amatino. All rights reserved.
//

#ifndef denomination_hpp
#define denomination_hpp

#include <stdio.h>
#include <string>

namespace Amatino {
    class Denomination {
    public:
        virtual int id() const = 0;
        virtual std::string code() const = 0;
    };
}

#endif /* denomination_hpp */
