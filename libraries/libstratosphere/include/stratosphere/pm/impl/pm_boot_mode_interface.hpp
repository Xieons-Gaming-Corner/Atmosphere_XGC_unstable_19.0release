/*
 * Copyright (c) Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#include <vapours.hpp>
#include <stratosphere/pm/pm_types.hpp>
#include <stratosphere/sf.hpp>

#define AMS_PM_I_BOOT_MODE_INTERFACE_INTERFACE_INFO(C, H)                              \
    AMS_SF_METHOD_INFO(C, H, 0, void,   GetBootMode,        (sf::Out<u32> out), (out)) \
    AMS_SF_METHOD_INFO(C, H, 1, void,   SetMaintenanceBoot, (),                 ())    \
    AMS_SF_METHOD_INFO(C, H, 2, void,   GetUnknown,         (sf::Out<u32> out), (out)) \
    AMS_SF_METHOD_INFO(C, H, 3, Result, SetUnknown,         (u32 val),          (val))

AMS_SF_DEFINE_INTERFACE(ams::pm::impl, IBootModeInterface, AMS_PM_I_BOOT_MODE_INTERFACE_INTERFACE_INFO, 0x96D01649)
