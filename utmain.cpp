#include <gtest/gtest.h>
#include <vector>
#include "algorithm.h"

using namespace std;

int main( int argc , char **argv )
{
    testing :: InitGoogleTest( &argc , argv ) ;
    return RUN_ALL_TESTS( ) ;
}

TEST (foreachTest,)
{
    vector<int> myvector;
    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);
    for_each(myvector, [](int i){std::cout << ' ' << i;});
}

TEST (allofTest1,)
{
    vector<int> myvector;
    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);
    all_of(&myvector, [](int i){return i+10;});
    ASSERT_EQ(myvector.at(0), 20);
    ASSERT_EQ(myvector.at(1), 30);
    ASSERT_EQ(myvector.at(2), 40);
}

TEST (allofTest2,)
{
    vector<int> myvector;
    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);
    all_of(&myvector, [](int i){return i-10;});
    ASSERT_EQ(myvector.at(0), 0);
    ASSERT_EQ(myvector.at(1), 10);
    ASSERT_EQ(myvector.at(2), 20);
}

TEST (allofTest3,)
{
    vector<int> myvector;
    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);
    all_of(&myvector, [](int i){return i*2;});
    ASSERT_EQ(myvector.at(0), 20);
    ASSERT_EQ(myvector.at(1), 40);
    ASSERT_EQ(myvector.at(2), 60);
}

TEST (allofTest4,)
{
    vector<int> myvector;
    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);
    all_of(&myvector, [](int i){return i/2;});
    ASSERT_EQ(myvector.at(0), 5);
    ASSERT_EQ(myvector.at(1), 10);
    ASSERT_EQ(myvector.at(2), 15);
}
