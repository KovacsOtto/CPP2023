#include <iostream>
#include "Settlement.h"
#include "SettlementStatisticsImpl.h"

using namespace std;

int main() {
    SettlementStatisticsImpl ss;
    ss.readSettlementsFromFile("telepulesek.txt");
    ss.addSettlement(Settlement("Budapest", "Budapest", 100));
    cout << ss;
    return 0;
}