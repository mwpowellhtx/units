// mcs::units - A C++ library for zero-overhead dimensional analysis and 
// unit/quantity manipulation and conversion
//
// Copyright (C) 2003-2007 Matthias Christian Schabel
// Copyright (C) 2007-2008 Steven Watanabe
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_UNIT_SYSTEMS_OTHER_APOTHECARIES_DRAM_HPP_INCLUDED
#define BOOST_UNIT_SYSTEMS_OTHER_APOTHECARIES_DRAM_HPP_INCLUDED

#include <boost/units/scaled_base_unit.hpp>
#include <boost/units/static_rational.hpp>
#include <boost/units/units_fwd.hpp>
#include <boost/units/systems/other/grain.hpp>

namespace boost {
namespace units {
namespace us {
typedef scaled_base_unit<grain_base_unit, scale<60, static_rational<1> > > apothecaries_dram_base_unit; //3.8879346e-3*kilograms
}

template<>
struct base_unit_info<us::apothecaries_dram_base_unit> {
    static const char* name() { return("apothecaries_dram"); }
    static const char* symbol() { return("apothecaries_dram"); }
};

}
}

#endif
