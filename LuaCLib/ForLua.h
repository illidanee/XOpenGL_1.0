#pragma once

#include "lua.hpp"

/****************************************************************************************************************
 *
 *    Brief   : ����������Ϊluaopen_XXX��ʽ,XXX����Ŀͬ����
 *
 ****************************************************************************************************************/
extern "C" __declspec(dllexport) int luaopen_LuaCLib(lua_State* L);