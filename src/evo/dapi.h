

// Copyright (c) 2014-2015 The Dash developers

// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.


#ifndef DAPI_H
#define DAPI_H

#include "main.h"
#include "db.h"
//ø#include "init.h"
#include "rpcserver.h"

#include "util.h"
#include "file.h"
#include "json/json_spirit.h"

#include <stdint.h>

#include "json/json_spirit_value.h"
#include "univalue/univalue.h"
#include <string>
#include <sstream>
#include <boost/lexical_cast.hpp>

using namespace std;
using namespace json_spirit;

std::string GetIndexFile(std::string strFilename);
std::string GetProfileFile(std::string strUID);
std::string GetPrivateDataFile(std::string strUID, int nSlot);
std::string escapeJsonString(const std::string& input);

class CDAPI
{
private:
    CDAPI();

public:
    static bool ValidateUsernames(Object& obj);
    static bool Execute(Object& obj);
    static bool ValidateSignature(Object& obj);
    static bool GetProfile(Object& obj);
    static bool SetProfile(Object& obj);
    static bool GetPrivateData(Object& obj);
    static bool SetPrivateData(Object& obj);
    static bool SendMessage(Object& obj);
    static bool BroadcastMessage(Object& obj);
    static bool InviteUser(Object& obj);
    static bool ValidateAccount(Object& obj);
    static bool SearchUsers(Object& obj);
};

#endif