#ifndef INTEGER_LITERALS_H
#define INTEGER_LITERALS_H

#include <cstdint>

namespace integer_literals {

#ifndef __cpp_consteval

constexpr std::uint8_t operator""_u8(unsigned long long value);

constexpr std::uint16_t operator""_u16(unsigned long long value);

constexpr std::uint32_t operator""_u32(unsigned long long value);

constexpr std::uint64_t operator""_u64(unsigned long long value);

constexpr std::int8_t operator""_i8(unsigned long long value);

constexpr std::int16_t operator""_i16(unsigned long long value);

constexpr std::int32_t operator""_i32(unsigned long long value);

constexpr std::int64_t operator""_i64(unsigned long long value);

constexpr std::int_least8_t operator""_il8(unsigned long long value);

constexpr std::int_least16_t operator""_il16(unsigned long long value);

constexpr std::int_least32_t operator""_il32(unsigned long long value);

constexpr std::int_least64_t operator""_il64(unsigned long long value);

constexpr std::int_fast8_t operator""_if8(unsigned long long value);

constexpr std::int_fast16_t operator""_if16(unsigned long long value);

constexpr std::int_fast32_t operator""_if32(unsigned long long value);

constexpr std::int_fast64_t operator""_if64(unsigned long long value);

#else

consteval std::uint8_t operator""_u8(unsigned long long value);

consteval std::uint16_t operator""_u16(unsigned long long value);

consteval std::uint32_t operator""_u32(unsigned long long value);

consteval std::uint64_t operator""_u64(unsigned long long value);

consteval std::int8_t operator""_i8(unsigned long long value);

consteval std::int16_t operator""_i16(unsigned long long value);

consteval std::int32_t operator""_i32(unsigned long long value);

consteval std::int64_t operator""_i64(unsigned long long value);

consteval std::int_least8_t operator""_il8(unsigned long long value);

consteval std::int_least16_t operator""_il16(unsigned long long value);

consteval std::int_least32_t operator""_il32(unsigned long long value);

consteval std::int_least64_t operator""_il64(unsigned long long value);

consteval std::int_fast8_t operator""_if8(unsigned long long value);

consteval std::int_fast16_t operator""_if16(unsigned long long value);

consteval std::int_fast32_t operator""_if32(unsigned long long value);

consteval std::int_fast64_t operator""_if64(unsigned long long value);

#endif

} // namespace integer_literals

#endif // INTEGER_LITERALS_H
