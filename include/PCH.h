#pragma once

#include <spdlog/sinks/basic_file_sink.h>

#include "RE/Skyrim.h"
#include "SKSE/SKSE.h"

namespace logger = SKSE::log;
using namespace std::literals;

using FormID = RE::FormID;
using RefID = RE::FormID;

constexpr const RefID player_refid = 0x14;