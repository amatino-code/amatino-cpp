//
//  transaction.cpp
//  Amatino
//
//  Created by Hugh Jeremy on 19/4/19.
//  Copyright © 2019 amatino. All rights reserved.
//

#include "transaction.hpp"
#include <vector>
#include "entry.hpp"

using namespace Amatino;

Transaction::Transaction(
    int id,
    std::vector<Entry>* entries
):
    _id { id },
    _entries { entries }
{}

int Transaction::id() { return _id; }
std::vector<Entry> Transaction::entries() { return *_entries; }
