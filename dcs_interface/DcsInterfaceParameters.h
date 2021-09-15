// Copyright 2020 Charles Tytler

#pragma once

namespace dcs_interface
{

// Parameters used for DCS interface.
const std::string DEFAULT_LISTENER_PORT = "1725";   // Port number to receive DCS updates from.
const std::string DEFAULT_SEND_PORT = "26027";      // Port number which DCS commands will be sent to.
const std::string DEFAULT_IP_ADDRESS = "127.0.0.1"; // IP Address on which to communicate with DCS -- Default LocalHost.

} // namespace dcs_interface
