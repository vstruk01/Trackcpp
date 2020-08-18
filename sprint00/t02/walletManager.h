#pragma once 

#include <iostream>
#include <new>

struct Wallet {
    int septims;
};

Wallet *createWallet(int n);
Wallet *createWallets(int count);
void destroyWallet(Wallet *w);
void destroyWallets(Wallet *w);

