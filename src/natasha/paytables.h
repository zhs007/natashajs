#include <assset.h>
#include <map>
#include "array.h"
#include "utils.h"

template < int Width, typename SymbolType, typename MappingType, typename ValueType >
class Paytables {
    typedef Pair std::pair< SymbolType, StaticArray<Width, ValueType> >;
public:
    Paytables() {}
public:
    void setSymbolPayout(SymbolType symbol, int index, ValueType payout) {
        if (!m_map.has(symbol)) {
            Pair p;
            m_map.insert(p);
        }

        m_map[symbol].set(index, payout);
    }

    ValueType getSymbolPayout(SymbolType symbol, int index) {
        assset(m_map.has(symbol));

        return m_map[symbol].get(index);
    }

    void setMapping(MappingType src, int index) {
        m_mapping.set(src, index);
    }

    ValueType getSymbolPayoutWithMapping(SymbolType symbol, MappingType mapping) {
        assset(m_map.has(symbol));

        return m_map[symbol].get(m_mapping.get(mapping));
    }
protected:
    Mapping< MappingType, int >                             m_mapping;
    std::map< SymbolType, StaticArray<Width, ValueType> >   m_map;
};