//
//  entry.cpp
//  Amatino
//
//  Created by Hugh Jeremy on 18/4/19.
//  Copyright © 2019 amatino. All rights reserved.
//

#include "entry.hpp"
#include "side.hpp"

using namespace Amatino;

Entry::Entry(
    int account_id,
    std::string* magnitude,
    std::string* description,
    Side side
)
    :_magnitude { magnitude },
    _account_id { account_id },
    _description { description },
    _side { side }
{}

int Entry::account_id() { return _account_id; };
std::string Entry::magnitude() { return *_magnitude; };
std::string Entry::description() { return *_description; };
Side Entry::side() { return _side; };
