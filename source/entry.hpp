//
//  entry.hpp
//  Amatino
//
//  Created by Hugh Jeremy on 18/4/19.
//  Copyright © 2019 amatino. All rights reserved.
//

#ifndef entry_hpp
#define entry_hpp

#include <stdio.h>
#include <string>
#include "entry.hpp"
#include "side.hpp"

namespace Amatino {
    struct Entry {
    public:
        Entry(
          int account_id,
          std::string* magnitude,
          std::string* description,
          Side side
        );
        int account_id();
        std::string magnitude();
        std::string description();
        Side side();
    private:
        int _account_id;
        std::string* _magnitude;
        std::string* _description;
        Side  _side;
    };
}

#endif /* entry_hpp */
