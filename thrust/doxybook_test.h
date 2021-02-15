/*
 *  Copyright 2008-2020 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/*! \file 
 *  \brief Test case for Doxybook rendering.
 */

#pragma once

namespace thrust
{

/*! \addtogroup test Test 
 *  \{
 */

/*! \brief \c test_class is a class intended to exercise and test Doxybook
 *  rendering.
 *
 *  It does many things.
 *
 *  \see test_function
 */
template <typename T, typename U>
struct test_class
{
  template <typename Z>
  struct nested_class {};

  [[deprecated]] constexpr int i = 0; ///< A test variable.

  template <typename X, typename Y>
  using other = test_class<X, Y>;

  enum class test_enum {
    A = 15, ///< An enumerator. It is equal to 15.
    B,
    C
  };

  /*! \brief Construct an empty test class.
   */
  __host__ __device__ constexpr
  test_class();

  /*! \brief A member function.
   *
   * \see device_new
   */
  __host__ __device__ constexpr
  int test_member_function();

  template <typename Z>
  friend void friend_function();

  template <typename Z>
  friend struct friend_class;
};

/*! \brief \c test_function is a function intended to exercise and test Doxybook
 *  rendering.
 */
template <typename T>
void test_function();

/*! \brief \c THRUST_TEST_MACRO is a macro intended to exercise and test
 *  Doxybook rendering.
 */
#define THRUST_TEST_MACRO(x) test_function()

/*! \} // test 
 */

} // namespace thrust

