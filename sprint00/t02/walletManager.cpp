#include "walletManager.h"

Wallet *createWallet(int n) {
    Wallet *w = new Wallet;

    w->septims = n;
    return w;
}

Wallet *createWallets(int count) {
    Wallet *w = new Wallet[count];

    return w;
}

void destroyWallet(Wallet *w) {
    delete w;
}

void destroyWallets(Wallet *w) {
    delete []w;
}
