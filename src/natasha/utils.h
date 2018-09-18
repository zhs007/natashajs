#include <assert.h>
#include <map>

template <typename SrcValueType, typename DestValueType>
class Mapping {
public:
    void set(SrcValueType src, DestValueType dest)
    {
        m_map[src] = dest;
    }

    DestValueType get(SrcValueType src)
    {
        return m_map[src];
    }

protected:
    std::map<SrcValueType, DestValueType> m_map;
};
