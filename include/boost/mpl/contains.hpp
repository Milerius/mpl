//-----------------------------------------------------------------------------
// boost mpl/contains.hpp header file
// See http://www.boost.org for updates, documentation, and revision history.
//-----------------------------------------------------------------------------
//
// Copyright (c) 2002
// Eric Friedman
//
// Permission to use, copy, modify, distribute and sell this software
// and its documentation for any purpose is hereby granted without fee, 
// provided that the above copyright notice appears in all copies and 
// that both the copyright notice and this permission notice appear in 
// supporting documentation. No representations are made about the 
// suitability of this software for any purpose. It is provided "as is" 
// without express or implied warranty.

#ifndef BOOST_MPL_CONTAINS_HPP_INCLUDED
#define BOOST_MPL_CONTAINS_HPP_INCLUDED

#include "boost/mpl/begin_end.hpp"
#include "boost/mpl/find.hpp"
#include "boost/mpl/type_traits/is_not_same.hpp"
#include "boost/mpl/aux_/lambda_spec.hpp"

namespace boost {
namespace mpl {

template< typename Sequence, typename T >
struct contains
    : is_not_same<
          typename find<Sequence,T>::type
        , typename end<Sequence>::type
        >
{
};

BOOST_MPL_AUX_LAMBDA_SPEC(2, contains)

} // namespace mpl
} // namespace boost

#endif // BOOST_MPL_CONTAINS_HPP_INCLUDED
