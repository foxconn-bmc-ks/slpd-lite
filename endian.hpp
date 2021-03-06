#pragma once

#include <endian.h>
#include <stdint.h>

namespace endian
{
namespace details
{
template <typename T>
struct convert
{
    static T to_network(T) = delete;
    static T from_network(T) = delete;
};

template<> struct convert<uint16_t>
{
    static uint16_t to_network(uint16_t i)
    {
        return htobe16(i);
    };
    static uint16_t from_network(uint16_t i)
    {
        return be16toh(i);
    };
};

template<> struct convert<uint32_t>
{
    static uint32_t to_network(uint32_t i)
    {
        return htobe32(i);
    };
    static uint32_t from_network(uint32_t i)
    {
        return be32toh(i);
    };
};
}
template<typename T> T to_network(T i)
{
    return details::convert<T>::to_network(i);
}
template<typename T> T from_network(T i)
{
    return details::convert<T>::from_network(i);
}
}
