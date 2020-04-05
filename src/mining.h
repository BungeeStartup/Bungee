// Copyright (c) 2016-2020 The CryptoCoderz Team / Espers
// Copyright (c) 2018-2020 The CryptoCoderz Team / INSaNe project
// Copyright (c) 2018-2020 The Rubix project
// Copyright (c) 2018-2020 The DigitalNote [XDN] project
// Copyright (c) 2020 The Bungee project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_MINING_H
#define BITCOIN_MINING_H

#include "bignum.h"
#include "util.h"

/** Minimum nCoinAge required to stake PoS */
static const unsigned int nStakeMinAge = 2 / 60; // 30 minutes
/** Time to elapse before new modifier is computed */
static const unsigned int nModifierInterval = 2 * 60;
/** Genesis block subsidy */
static const int64_t nGenesisBlockReward = 1 * COIN;
/** Reserve block subsidy */
static const int64_t nBlockRewardReserve = 250000 * COIN; // Reserve for development of BNG
/** Standard block subsidy */
static const int64_t nBlockStandardReward = 1 * COIN;
/** Block spacing preferred */
static const int64_t BLOCK_SPACING = 60;
/** Block spacing minimum */
static const int64_t BLOCK_SPACING_MIN = 45;
/** Block spacing maximum */
static const int64_t BLOCK_SPACING_MAX = 75;
/** Desired block times/spacing */
static const int64_t GetTargetSpacing = BLOCK_SPACING;
/** MNengine collateral */
static const int64_t MNengine_COLLATERAL = (100 * COIN);
/** MNengine pool values */
static const int64_t MNengine_POOL_MAX = (1000 * COIN);
/** MasterNode required collateral */
inline int64_t MasternodeCollateral(int nHeight) { return 100000; } // 100,000 BNG required as collateral
/** Coinbase transaction outputs can only be staked after this number of new blocks (network rule) */
static int nStakeMinConfirmations = 30;
/** Coinbase transaction outputs can only be staked after this number of new blocks for chain start (network rule) */
static const int nStakeChainStartConfirmations = 3;
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int nCoinbaseMaturity = 3; // 3-TXs | 30-Mined
/** Mined amount after confirmations */
static const int nCoinbaseMinedMaturity = 27;
/** Mined confirmations for initial chain start */
static const int nCoinbaseChainstartMaturity = 3;


#endif // BITCOIN_MINING_H
