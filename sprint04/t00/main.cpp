#include "algorithmUtils.h"

#include <iostream>
#include <string>
#include <vector>

// int&& set(int x) {
//     return static_cast<int&&>(x);
// }


int main() {
    std::cout << "Hello World\n";

    // std::cout << "one test = " << IsInsideRange<int>(10, 11, 20) << '\n';
    // const std::pair<const int, const int> minmax(5, 15);
    // std::cout << "two test = " << IsInsideRange<int>(10, minmax) << '\n';


    // int a = 1, b = 10;
    // std::cout << "test Modify = " << Modify<int, int&&>(a, set(b)) << '\n';
    // std::cout << "a == " << a << '\n';

    /**
     * ! FOR REMOVE, FIND, CONTAINS, CONTAINSIF, COUNTIF, MIN_ELEMENT, MAX_ELEMENT,
     * ! ForEach, Unique, Sort, CountOf CountOfIf
     */

    // std::vector<int> vi;
    // for (int i = 0; i < 15; i++) {
    //     vi.push_back(10);
    // }
    // vi.push_back(1);
    // vi.push_back(4);
    // vi.push_back(3);
    // vi.push_back(5);
    // vi.push_back(2);
    // vi.push_back(14);
    // for (int i : vi) {
    //     std::cout << i << ' ';
    // }
    // std::cout << '\n';


    /**
     * ! REMOVE
     */

    // RemoveAll(vi, 10);
    // RemoveAllIf(vi, [](int n){return n < 14;});
    // for (auto it = vi.begin(); it != vi.end(); it++) {
    //     std::cout << *it << ' ';
    // }
    // std::cout << '\n';

    /**
     * ! FIND
     */

    // std::cout << *Find(vi, 1) << '\n';

    /**
     * ! CONTAINS AND CONTAINSIF
     */

    // std::cout << "1  == " << Contains(vi, 1) << '\n';
    // std::cout << "83 == " << Contains(vi, 83) << '\n';
    // std::cout << "1  == " << ContainsIf(vi, [](int n) {return n == 1;}) << '\n';
    // std::cout << "83 == " << ContainsIf(vi, [](int n) {return n == 83;}) << '\n';

    /**
     * ! CountIf
     */

    // std::cout << "count(1)  == " << CountIf(vi, [](int n) { return n == 1; }) << '\n';
    // std::cout << "count(10) == " << CountIf(vi, [](int n) { return n == 10; }) << '\n';

    /**
     * ! Min Max
     */

    // std::cout << Min(10, 5, 4, 6, 6, 4, 9) << '\n';
    // std::cout << Min(245, 2346, 365, 34, 345, 2222) << '\n';
    // std::cout << Max(10, 5, 4, 6, 6, 4, 9) << '\n';
    // std::cout << Max(245, 2346, 365, 34, 345, 2222) << '\n';

    /**
     * ! Min Max (Element)
     */

    // std::cout << *MinElement(vi) << '\n';
    // std::cout << *MinElement(vi, [](int x, int y){return x < 13;}) << '\n';
    // std::cout << *MaxElement(vi) << '\n';
    // std::cout << *MaxElement(vi) << '\n';

    /**
     * ! Sort
     */

    // Sort(vi);
    // Sort(vi, [](int x, int y){return x < y;});
    // Sort(vi, [](int x, int y) { return x > y; });
    // for (auto it = vi.begin(); it != vi.end(); it++) {
    //     std::cout << *it << ' ';
    // }
    // std::cout << '\n';

    /**
     * ! Unique
     */

    // Unique(vi);
    // Unique(vi, [](int i, int d){return i == d;});
    // for (auto it = vi.begin(); it != vi.end(); it++) {
    //     std::cout << *it << ' ';
    // }
    // std::cout << '\n';

    /**
     * ! ForEach
     */

    // ForEach(vi, [](int& i){return i -= 1;});
    // for (auto it = vi.begin(); it != vi.end(); it++) {
    //     std::cout << *it << ' ';
    // }
    // std::cout << '\n';

    /**
     * ! CountOf CountOfIf
     */

    // std::cout << "idx(1)  == " << IndexOf(vi, 4) << '\n';
    // std::cout << "idx(1)  == " << IndexOfIf(vi, [](int i) -> bool { return i == 4;}) << '\n';
    // std::cout << "idx(10) == " << IndexOf(vi, 10) << '\n';
    // std::cout << "idx(10) == " << IndexOfIf(vi, [](int i) -> bool { return i == 10; }) << '\n';
}
