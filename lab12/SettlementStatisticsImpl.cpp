//
// Created by Otto on 12/11/2023.
//

#include <fstream>
#include "SettlementStatisticsImpl.h"
#include <vector>
#include <map>
#include <iostream>

//int SettlementStatisticsImpl::numSettlements() const {
//    return settlements.size();
//}

void SettlementStatisticsImpl::addSettlement(const Settlement &settlement) {
    settlements.insert(make_pair(settlement.getCounty(), settlement));
}

void SettlementStatisticsImpl::readSettlementsFromFile(const string &filename) {
    ifstream file(filename);
    vector <string > tokens;
    string line;
    while (getline(file, line,',')) {
        int number;
        tokens.push_back(line);
        try {
            number = std::stoi(tokens[2]);
            std::cout << "Number: " << number << std::endl;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Invalid argument: " << e.what() << std::endl;
        } catch (const std::logic_error& e) {
            std::cerr << "Logic error: " << e.what() << std::endl;
        }
        Settlement settlement(tokens[0], tokens[1], number);
        addSettlement(settlement);
        tokens.clear();
    }
    file.close();
}

ostream &operator<<(ostream &out, const SettlementStatisticsImpl &ss) {
    for(auto settlement : ss.settlements) {
        out << settlement.second.getName() << "," << settlement.second.getCounty() << "," << settlement.second.getPopulation() << endl;
    }
    return out;
}

