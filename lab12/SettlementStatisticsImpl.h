//
// Created by Otto on 12/11/2023.
//

#ifndef MAIN_12_CPP_SETTLEMENTSTATISTICSIMPL_H
#define MAIN_12_CPP_SETTLEMENTSTATISTICSIMPL_H

#include "Settlement.h"
#include <vector>
#include <map>

struct SettlementStatistics {
//    virtual int numSettlements() const = 0;
//    virtual int numCounties() const = 0;
//    virtual int numSettlementsByCounty(const string& county) const = 0;
//    virtual vector<Settlement> findSettlementsByCounty(
//            const string& county) const = 0;
//    virtual Settlement findSettlementsByNameAndCounty(
//            const string& name, const string& county) const = 0;
//    virtual Settlement maxPopulation() const = 0;
//    virtual Settlement minPopulation() const = 0;
//    virtual vector<Settlement> findSettlementsByName(
//            const string& name) = 0;
};

class SettlementStatisticsImpl : public SettlementStatistics {
public:
    multimap <string, Settlement> settlements;
    void readSettlementsFromFile(const string& filename);
    void addSettlement(const Settlement& settlement);
//    int numSettlements() const override;
//    int numCounties() const override;
//    int numSettlementsByCounty(const string& county) const override;
//    vector<Settlement> findSettlementsByCounty(
//            const string& county) const override;
//    Settlement findSettlementsByNameAndCounty(
//            const string& name, const string& county) const override;
//    Settlement maxPopulation() const override;
//    Settlement minPopulation() const override;
//    vector<Settlement> findSettlementsByName(
//            const string& name) override;
    friend ostream& operator<<(ostream& out, const SettlementStatisticsImpl& ss);
};


#endif //MAIN_12_CPP_SETTLEMENTSTATISTICSIMPL_H
