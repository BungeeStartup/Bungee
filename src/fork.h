// Copyright (c) 2015-2020 The CryptoCoderz Team / Espers
// Copyright (c) 2018-2020 The Rubix Project
// Copyright (c) 2018-2020 The DigitalNote [XDN] project
// Copyright (c) 2020 The Bungee project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_FORK_H
#define BITCOIN_FORK_H

#include "bignum.h"

/** Reserve Phase start block */ 
static const int64_t nReservePhaseStart = 0;
/** Velocity toggle block */
static const int64_t VELOCITY_TOGGLE = 15; // Implementation of the Velocity system into the chain.
/** Velocity retarget toggle block */
static const int64_t VELOCITY_TDIFF = 0; // Use Velocity's retargetting method.
/** Protocol 3.0 toggle */
inline bool IsProtocolV3(int64_t nTime) { return TestNet() || nTime > 1493596800; } // Mon, 01 May 2017 00:00:00 GMT
#endif // BITCOIN_FORK_H
