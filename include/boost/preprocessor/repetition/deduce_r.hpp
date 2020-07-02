# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_REPETITION_DEDUCE_R_HPP
# define BOOST_PREPROCESSOR_REPETITION_DEDUCE_R_HPP
#
# /* BOOST_PP_DEDUCE_R */
#
# include <boost/preprocessor/detail/auto_rec.hpp>
# include <boost/preprocessor/repetition/for.hpp>
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_FOR == 256
# define BOOST_PP_DEDUCE_R() BOOST_PP_AUTO_REC(BOOST_PP_FOR_P, 256)
# elif BOOST_PP_LIMIT_FOR == 512
# define BOOST_PP_DEDUCE_R() BOOST_PP_AUTO_REC(BOOST_PP_FOR_P, 512)
# else
# error Incorrect value for the BOOST_PP_LIMIT_FOR limit
# endif
#
# endif
