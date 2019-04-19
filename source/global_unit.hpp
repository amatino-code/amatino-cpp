//
//  global_unit.hpp
//  Amatino
//
//  Created by Hugh Jeremy on 19/4/19.
//  Copyright © 2019 amatino. All rights reserved.
//

#ifndef global_unit_hpp
#define global_unit_hpp

#include <stdio.h>
#include "denomination.hpp"
#include <string>

namespace Amatino {
    class Global_unit: public Denomination {
    public:
        int id();
        std::string code();
    };
}

#endif /* global_unit_hpp */
