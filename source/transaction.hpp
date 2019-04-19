//
//  transaction.hpp
//  Amatino
//
//  Created by Hugh Jeremy on 19/4/19.
//  Copyright © 2019 amatino. All rights reserved.
//

#ifndef transaction_hpp
#define transaction_hpp

#include <stdio.h>
#include "entry.hpp"
#include <vector>
#include <string>

namespace Amatino {
    class Transaction {
    public:
        int id();
        std::vector<Entry> entries();

    private:
        Transaction(
            int id,
            std::vector<Entry>* entries
        );
        int _id;
        std::vector<Entry>* _entries;
        
        ~Transaction() { delete[] _entries; }
    };
}

#endif /* transaction_hpp */
