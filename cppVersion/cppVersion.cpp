/**
 * @file cppVersion.cpp
 *
 * @author Jaroslaw Wiosna
 *
 * @par Licence
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 */

#include <gtest/gtest.h>

TEST(Test, cppVersion) {
#if __cplusplus <= 199711L
    ASSERT_TRUE(false);
#else
    ASSERT_TRUE(true);
#endif
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
