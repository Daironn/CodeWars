// Snail.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <vector>
#include <iostream>
std::vector<int> snail(const std::vector<std::vector<int>>& snail_map);

void horizontal(std::vector<std::vector<int>> vec, int side, int shift, std::vector<int> &newsnail);
void vertical(std::vector<std::vector<int>> vec, int side, int shift, std::vector<int> &newsnail);

int main()
{
    std::vector<std::vector<int>> v = { {1,2,3,4}, {12,13,14,5}, {11,16,15,6}, {10,9,8,7} };

    std::vector<int> new_snail = snail(v);

    for (auto x : new_snail) {
        std::cout << x;
    }

}
std::vector<int> snail(const std::vector<std::vector<int>>& snail_map) {

    std::vector<int> returned; 
    int x;

    if (snail_map.size() % 2 == 1) {
        x = snail_map.size() / 2 + 1;
    }
    else {
        x = snail_map.size() / 2;
    }

    for (int i = 0; i < x; i++) {
        if (i == x - 1) {
            if (snail_map.size() % 2 == 0) {
                horizontal(snail_map, 0, i,returned);
                vertical(snail_map, 0, i, returned);
                horizontal(snail_map, 1, i, returned);
                vertical(snail_map, 1, i, returned);
            }
            else {
                returned.push_back(snail_map[snail_map.size() / 2][snail_map.size() / 2 ]);
            }
        }
        else {
            horizontal(snail_map, 0, i, returned);
            vertical(snail_map, 0, i, returned);
            horizontal(snail_map, 1, i, returned);
            vertical(snail_map, 1, i, returned);
        }
    }

    return returned;
}
void horizontal(std::vector<std::vector<int>> vec, int side, int shift, std::vector<int> &newsnail) {

    if (side == 0) {
        for (int i = 0; i < vec.size() - 1 - (shift*2); i++) {
            //std::cout << vec[0 + shift][i + shift];
            newsnail.push_back(vec[0 + shift][i + shift]);
        }

    }
    else {
        for (int i = vec.size()-1; i >=1+ shift*2 ; i--) {
            //std::cout << vec[vec.size()-1 - shift][i - shift];
            newsnail.push_back(vec[vec.size() - 1 - shift][i - shift]);
        }

    }
}
void vertical(std::vector<std::vector<int>> vec, int side, int shift, std::vector<int> &newsnail) {

    if (side == 0) {
        for (int i = 0; i < vec.size() - 1 - (shift * 2); i++) {
            //std::cout << vec[i + shift][vec.size() - 1 - shift];
            newsnail.push_back(vec[i + shift][vec.size() - 1 - shift]);
        }

    }
    else {
        for (int i = vec.size() - 1; i >= 1 + shift*2; i--) {
            //std::cout << vec[i-shift][0+shift];
            newsnail.push_back(vec[i - shift][0 + shift]);
        }

    }
}