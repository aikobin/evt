#pragma once
#include <llvm/ADT/SmallVector.h>
#include <llvm/ADT/SmallSet.h>

namespace fc {

template<typename T, unsigned N> using small_vector = llvm::SmallVector<T, N>;
template<typename T> using small_vector_base = llvm::SmallVectorImpl<T>;

namespace raw {

template<typename Stream, typename T, unsigned N>
inline void pack(Stream& s, const small_vector<T, N>& v);

template<typename Stream, typename T, unsigned N>
inline void unpack(Stream& s, small_vector<T, N>& v);

}  // namespace raw
}  // namespace fc
