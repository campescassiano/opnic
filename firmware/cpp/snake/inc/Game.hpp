/*******************************************************************************
 * @file Game.hpp
 * @author Cassiano Silva de Campes
 * @date 2022-04-24
 * @version v1.0
 * @brief Definitions of the Game state machine
 *
 * @copyright Copyright (c) 2022 nubix Software-Design GmbH, All rights
 *reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Redistribution and use in source and binary forms, with or without
 *modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 *PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS
 *BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************/
#pragma once

#include <cstdint>

#include "Snake.hpp"
#include "World.hpp"

#define GAME_FPS INT32_C(60)                ///< Game FPS
#define GAME_FPS_PERIOD_US UINT32_C(16666)  ///< Refer to 60 FPS

/**
 * @brief Enum class that is used to divide the game into multiple states
 */
enum class State {
  Init,           ///< Initial state of the game
  Startup,        ///< Startup state of the game
  Running,        ///< Running state of the game
  Popup,          ///< Popup state of the game
  Sensor,         ///< Sensor state of the game
  Source,         ///< Repository QR Code
  Credits,        ///< Credits state of the game
  QrCodeCredits,  ///< QR code credits state of the game
};

/**
 * @brief C-style function that runs the game logic
 */
void GameRun(void);