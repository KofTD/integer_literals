#include <integer_literals.hpp>

#ifndef __cpp_consteval

constexpr std::uint8_t
integer_literals::operator""_u8(unsigned long long value) {
  return static_cast<std::uint8_t>(value);
}

constexpr std::uint16_t
integer_literals::operator""_u16(unsigned long long value) {
  return static_cast<std::uint16_t>(value);
}

constexpr std::uint32_t
integer_literals::operator""_u32(unsigned long long value) {
  return static_cast<std::uint32_t>(value);
}

constexpr std::uint64_t
integer_literals::operator""_u64(unsigned long long value) {
  return static_cast<std::uint64_t>(value);
}

constexpr std::int8_t
integer_literals::operator""_i8(unsigned long long value) {
  return static_cast<std::int8_t>(value);
}

constexpr std::int16_t
integer_literals::operator""_i16(unsigned long long value) {
  return static_cast<std::int16_t>(value);
}

constexpr std::int32_t
integer_literals::operator""_i32(unsigned long long value) {
  return static_cast<std::int32_t>(value);
}

constexpr std::int64_t
integer_literals::operator""_i64(unsigned long long value) {
  return static_cast<std::int64_t>(value);
}

constexpr std::int_least8_t
integer_literals::operator""_il8(unsigned long long value) {
  return static_cast<std::int_least8_t>(value);
}

constexpr std::int_least16_t
integer_literals::operator""_il16(unsigned long long value) {
  return static_cast<std::int_least16_t>(value);
}

constexpr std::int_least32_t
integer_literals::operator""_il32(unsigned long long value) {
  return static_cast<std::int_least32_t>(value);
}

constexpr std::int_least64_t
integer_literals::operator""_il64(unsigned long long value) {
  return static_cast<std::int_least64_t>(value);
}

constexpr std::int_fast8_t
integer_literals::operator""_if8(unsigned long long value) {
  return static_cast<std::int_fast8_t>(value);
}

constexpr std::int_fast16_t
integer_literals::operator""_if16(unsigned long long value) {
  return static_cast<std::int_fast16_t>(value);
}

constexpr std::int_fast32_t
integer_literals::operator""_if32(unsigned long long value) {
  return static_cast<std::int_fast32_t>(value);
}

constexpr std::int_fast64_t
integer_literals::operator""_if64(unsigned long long value) {
  return static_cast<std::int_fast64_t>(value);
}

#else

consteval std::uint8_t
integer_literals::operator""_u8(unsigned long long value) {
  return static_cast<std::uint8_t>(value);
}

consteval std::uint16_t
integer_literals::operator""_u16(unsigned long long value) {
  return static_cast<std::uint16_t>(value);
}

consteval std::uint32_t
integer_literals::operator""_u32(unsigned long long value) {
  return static_cast<std::uint32_t>(value);
}

consteval std::uint64_t
integer_literals::operator""_u64(unsigned long long value) {
  return static_cast<std::uint64_t>(value);
}

consteval std::int8_t
integer_literals::operator""_i8(unsigned long long value) {
  return static_cast<std::int8_t>(value);
}

consteval std::int16_t
integer_literals::operator""_i16(unsigned long long value) {
  return static_cast<std::int16_t>(value);
}

consteval std::int32_t
integer_literals::operator""_i32(unsigned long long value) {
  return static_cast<std::int32_t>(value);
}

consteval std::int64_t
integer_literals::operator""_i64(unsigned long long value) {
  return static_cast<std::int64_t>(value);
}

consteval std::int_least8_t
integer_literals::operator""_il8(unsigned long long value) {
  return static_cast<std::int_least8_t>(value);
}

consteval std::int_least16_t
integer_literals::operator""_il16(unsigned long long value) {
  return static_cast<std::int_least16_t>(value);
}

consteval std::int_least32_t
integer_literals::operator""_il32(unsigned long long value) {
  return static_cast<std::int_least32_t>(value);
}

consteval std::int_least64_t
integer_literals::operator""_il64(unsigned long long value) {
  return static_cast<std::int_least64_t>(value);
}

consteval std::int_fast8_t
integer_literals::operator""_if8(unsigned long long value) {
  return static_cast<std::int_fast8_t>(value);
}

consteval std::int_fast16_t
integer_literals::operator""_if16(unsigned long long value) {
  return static_cast<std::int_fast16_t>(value);
}

consteval std::int_fast32_t
integer_literals::operator""_if32(unsigned long long value) {
  return static_cast<std::int_fast32_t>(value);
}

consteval std::int_fast64_t
integer_literals::operator""_if64(unsigned long long value) {
  return static_cast<std::int_fast64_t>(value);
}

#endif
