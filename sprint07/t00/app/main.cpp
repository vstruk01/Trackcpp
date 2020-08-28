#include "myVector.h"
// #include <vector>

// using namespace CBL;

int main() {
    std::cout << "\n\t\t\t\t\t\tHello World\n\n";

    CBL::Vector<std::string> v1;
    CBL::Vector<std::string> v2;


    v1.push_back("hello vlad, valick");
    v1.push_back("hello yura");
    v1.push_back("hello sasha");
    v1.push_back("hello pasha");
    v1.push_back("hello dasha");
    v1.push_back("hello olenka");

    v2 = v1;
    v2.push_back("ohayo");
    v2.push_back("ikuso");



    std::cout << "v1 = \n";
    for (std::string i : v1) {
        std::cout << i << '\n';
    }
    std::cout << '\n';

    std::cout << "v2 = \n";
    for (std::string i : v2) {
        std::cout << i << '\n';
    }
    std::cout << '\n';

    CBL::Vector<int> v3 {1,2,3,4};

    v3.push_back(5);

    

    std::cout << "size = " << v3.size() << '\n';
    std::cout << "capa = " << v3.capacity() << '\n';

    // v1.insert(v1.begin() + 10000000000U, 10);

    // std::cout << "v2 = ";
    // for (int i : v2) {
    //     std::cout << i << ' ';
    // }
    // std::cout << '\n';

    // CBL::Vector<int> v1 = {1, 2, 3, 4, 5, 6};
    // CBL::Vector<int> v2 = {1, 2, 3, 4, 5, 6, 7};
    // std::cout << (v1 < v2) << '\n';
    // CBL::Vector<int> v3 = {1, 2, 3, 4, 5, 6};
    // CBL::Vector<int> v4 = {1, 2, 3, 4, 5, 6};
    // std::cout << (v3 < v4) << '\n';
    // CBL::Vector<int> v5 = {1, 2, 3, 4, 5, 7};
    // CBL::Vector<int> v6 = {1, 2, 3, 4, 5, 6};
    // std::cout << (v5 < v6) << '\n';
    // CBL::Vector<int> v7 = {1, 2, 3, 4, 5, 6};
    // CBL::Vector<int> v8 = {1, 2, 3, 4, 5, 7};
    // std::cout << (v7 < v8) << '\n';
    // CBL::Vector<int> v9 = {1, 2, 3, 4, 5, 6, 7};
    // CBL::Vector<int> v01 = {1, 2, 3, 4, 5, 6};
    // std::cout << (v9 < v01) << "\n\n\n\n";

    // CBL::Vector<int> vv1 = {1, 2, 3, 4, 5, 6};
    // CBL::Vector<int> vv2 = {1, 2, 3, 4, 5, 6, 7};
    // std::cout << (vv1 > vv2) << '\n';
    // CBL::Vector<int> vv3 = {1, 2, 3, 4, 5, 6};
    // CBL::Vector<int> vv4 = {1, 2, 3, 4, 5, 6};
    // std::cout << (vv3 > vv4) << '\n';
    // CBL::Vector<int> vv5 = {1, 2, 3, 4, 5, 7};
    // CBL::Vector<int> vv6 = {1, 2, 3, 4, 5, 6};
    // std::cout << (vv5 > vv6) << '\n';
    // CBL::Vector<int> vv7 = {1, 2, 3, 4, 5, 6};
    // CBL::Vector<int> vv8 = {1, 2, 3, 4, 5, 7};
    // std::cout << (vv7 > vv8) << '\n';
    // CBL::Vector<int> vv9 = {1, 2, 3, 4, 5, 6, 7};
    // CBL::Vector<int> vv01 = {1, 2, 3, 4, 5, 6};
    // std::cout << (vv9 > vv01) << "\n\n\n\n";

    // CBL::Vector<int> vvv1 = {1, 2, 3, 4, 5, 6};
    // CBL::Vector<int> vvv2 = {1, 2, 3, 4, 5, 6, 7};
    // std::cout << (vvv1 <= vvv2) << '\n';
    // CBL::Vector<int> vvv3 = {1, 2, 3, 4, 5, 6};
    // CBL::Vector<int> vvv4 = {1, 2, 3, 4, 5, 6};
    // std::cout << (vvv3 <= vvv4) << '\n';
    // CBL::Vector<int> vvv5 = {1, 2, 3, 4, 5, 7};
    // CBL::Vector<int> vvv6 = {1, 2, 3, 4, 5, 6};
    // std::cout << (vvv5 <= vvv6) << '\n';
    // CBL::Vector<int> vvv7 = {1, 2, 3, 4, 5, 6};
    // CBL::Vector<int> vvv8 = {1, 2, 3, 4, 5, 7};
    // std::cout << (vvv7 <= vvv8) << '\n';
    // CBL::Vector<int> vvv9 = {1, 2, 3, 4, 5, 6, 7};
    // CBL::Vector<int> vvv01 = {1, 2, 3, 4, 5, 6};
    // std::cout << (vvv9 <= vvv01) << "\n\n\n\n";

    // CBL::Vector<int> vvvv1 = {1, 2, 3, 4, 5, 6};
    // CBL::Vector<int> vvvv2 = {1, 2, 3, 4, 5, 6, 7};
    // std::cout << (vvvv1 >= vvvv2) << '\n';
    // CBL::Vector<int> vvvv3 = {1, 2, 3, 4, 5, 6};
    // CBL::Vector<int> vvvv4 = {1, 2, 3, 4, 5, 6};
    // std::cout << (vvvv3 >= vvvv4) << '\n';
    // CBL::Vector<int> vvvv5 = {1, 2, 3, 4, 5, 7};
    // CBL::Vector<int> vvvv6 = {1, 2, 3, 4, 5, 6};
    // std::cout << (vvvv5 >= vvvv6) << '\n';
    // CBL::Vector<int> vvvv7 = {1, 2, 3, 4, 5, 6};
    // CBL::Vector<int> vvvv8 = {1, 2, 3, 4, 5, 7};
    // std::cout << (vvvv7 >= vvvv8) << '\n';
    // CBL::Vector<int> vvvv9 = {1, 2, 3, 4, 5, 6, 7};
    // CBL::Vector<int> vvvv01 = {1, 2, 3, 4, 5, 6};
    // std::cout << (vvvv9 >= vvvv01) << "\n\n\n\n";

    // for (int i = 0; i < 99999999; i++) {
    //     v1.push_back(10);
    // }

    // std::cout << (v1 == v2) << '\n'; ok
    // std::cout << (v1 != v2) << '\n'; ok
    // std::cout << (v1 > v2) << '\n';
    // std::cout << (v1 >= v2) << '\n';
    // std::cout << (v1 <= v2) << '\n';

    // auto it1 = v1.begin();
    // auto it2 = v1.end();
    // it1 += 3;
    // CBL::Vector<int> v2(it1, it2);

    // std::cout << "v2[0] = " << v2[0] << '\n';
    // std::cout << "v2[1] = " << v2[1] << '\n';
    // std::cout << "v2[2] = " << v2[2] << '\n';
    // std::cout << "v2[3] = " << v2[3] << '\n';
    // std::cout << "size = " << v2.size() << '\n';
    // std::cout << "capacity = " << v2.capacity() << "\n\n";

    // int *iter = v2.begin() + 2;
    // v2.insert(iter ,10);

    // std::cout << "v2[0] = " << v2[0] << '\n';
    // std::cout << "v2[1] = " << v2[1] << '\n';
    // std::cout << "v2[2] = " << v2[2] << '\n';
    // std::cout << "v2[3] = " << v2[3] << '\n';
    // std::cout << "size = " << v2.size() << '\n';
    // std::cout << "capacity = " << v2.capacity() << "\n\n";

    // int *ite = v2.begin() + 1;
    // std::cout << "iter = " << *ite << "\n\n";
    // v2.insert(ite, 11);

    // std::cout << "v2[0] = " << v2[0] << '\n';
    // std::cout << "v2[1] = " << v2[1] << '\n';
    // std::cout << "v2[2] = " << v2[2] << '\n';
    // std::cout << "v2[3] = " << v2[3] << '\n';
    // std::cout << "v2[4] = " << v2[4] << '\n';
    // std::cout << "size = " << v2.size() << '\n';
    // std::cout << "capacity = " << v2.capacity() << "\n\n";

    /*CBL::Vector<int> vi = {1, 2, 3, 5, 6, 3, 5, 6, 4};

    std::cout << "vi[0] = " << vi[0] << '\n';
    std::cout << "size = " << vi.size() << '\n';
    std::cout << "capacity = " << vi.capacity() << '\n';
    auto it = vi.end();
    it--;
    std::cout << "vi end = " << *it << '\n';
    std::cout << "vi begin = " << *vi.begin() << '\n';
    vi.push_back(9);
    std::cout << "vi[9] = " << vi[9] << '\n';
    vi.push_back(10);
    std::cout << "vi[10] = " << vi[10] << '\n';
    vi.push_back(11);
    std::cout << "vi[11] = " << vi[11] << '\n';
    vi.push_back(12);
    std::cout << "vi[12] = " << vi[12] << '\n';
    std::cout << "size = " << vi.size() << '\n';
    std::cout << "capacity = " << vi.capacity() << '\n';
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(12);
    vi.push_back(4);
    vi.push_back(3);
    vi.push_back(2);
    vi.push_back(1);
    vi.push_back(345);
    std::cout << "size = " << vi.size() << '\n';
    std::cout << "capacity = " << vi.capacity() << '\n';
    std::cout << "vi[255] = " << vi[255] << '\n';
    std::cout << "vi[256] = " << vi[256] << '\n';
    std::cout << "vi[257] = " << vi[257] << '\n';
    std::cout << "vi[258] = " << vi[258] << '\n';
    std::cout << "vi[259] = " << vi[259] << '\n';
    std::cout << "vi[260] = " << vi[260] << '\n';
    std::cout << "vi[261] = " << vi[261] << '\n';
    std::cout << "vi[262] = " << vi[262] << '\n';
    std::cout << "vi[263] = " << vi[263] << '\n';
    std::cout << "vi[264] = " << vi[264] << '\n';
    std::cout << "vi[265] = " << vi[265] << '\n';
    // std::allocator<int> al;

    // int *i = al.allocate(10);
    // al.construct(i, 10);
    // al.construct(i + 1, 10);
    // for (int j = 0; j < 10; j++) {
    //     std::cout << i[j] << '\n';
    // }*/
}