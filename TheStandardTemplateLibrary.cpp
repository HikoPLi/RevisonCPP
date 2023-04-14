// An example of using the vector container:

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // create a vector to store integers
    vector<int> vec;
    int i;
    // display the original size of vec
    cout << "original vector size = " << vec.size() << endl;
    // push 5 values into the vector
    for (i = 0; i < 5; i++)
        vec.push_back(2 * i);
    // display extended size of vec
    cout << "extended vector size = " << vec.size() << endl;
    // access 5 values from the vector
    for (i = 0; i < 5; i++)
        cout << "value of vec [" << i << "] = " << vec[i] << endl;
    // use iterator to access the values
    vector<int>::iterator v = vec.begin();
    while (v != vec.end())
    {
        cout << "value of v = " << *v << endl;
        v++;
    }
    return 0;
}

// output:
// original vector size = 0
// extended vector size = 5
// value of vec [0] = 0
// value of vec [1] = 2
// value of vec [2] = 4
// value of vec [3] = 6
// value of vec [4] = 8
// value of v = 0
// value of v = 2
// value of v = 4
// value of v = 6
// value of v = 8

// Python:
// # create a list to store integers
// vec = []
// # display the original size of vec
// print("original vector size =", len(vec))
// # push 5 values into the vector
// for i in range(5):
//     vec.append(2 * i)
// # display extended size of vec
// print("extended vector size =", len(vec))
// # access 5 values from the vector
// for i in range(5):
//     print("value of vec [{}] = {}".format(i, vec[i]))
// # use iterator to access the values
// v = iter(vec)
// while True:
//     try:
//         value = next(v)
//         print("value of v =", value)
//     except StopIteration:
//         break