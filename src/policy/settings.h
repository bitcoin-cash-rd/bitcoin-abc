// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_POLICY_SETTINGS_H
#define BITCOIN_POLICY_SETTINGS_H

#include <cstdint>

class CFeeRate;

// Policy settings which are configurable at runtime.
extern CFeeRate dustRelayFee;
extern uint32_t nBytesPerSigOp;
extern bool fIsBareMultisigStd;

#endif // BITCOIN_POLICY_SETTINGS_H
