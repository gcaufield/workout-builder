/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2022 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.94Release
// Tag = production/akw/21.94.00-0-g0f668193
/////////////////////////////////////////////////////////////////////////////////////////////



#if !defined(FIT_MESG_BROADCAST_PLUGIN_HPP)
#define FIT_MESG_BROADCAST_PLUGIN_HPP

#include "fit.hpp"
#include "fit_mesg.hpp"

namespace fit
{

class MesgBroadcastPlugin
{
public:
    virtual ~MesgBroadcastPlugin() { /* Empty destructor */ };
    virtual void OnBroadcast(std::vector<Mesg>& mesgs) = 0;
    virtual void OnIncomingMesg(const Mesg& mesg) = 0;
};

} // namespace fit

#endif // defined(FIT_MESG_BROADCAST_PLUGIN_HPP)
