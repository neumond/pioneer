/* Copyright © 2008-2020 Pioneer Developers. See AUTHORS.txt for details */
/* Licensed under the terms of the GPL v3. See licenses/GPL-3.txt        */

/* THIS FILE IS AUTO-GENERATED, CHANGES WILL BE OVERWRITTEN */
/* enum table generated by scan_enums.py */

#include "enum_table.h"
#include "Body.h"
#include "DynamicBody.h"
#include "Ship.h"
#include "ShipAICmd.h"
#include "ShipType.h"
#include "SpaceStation.h"
#include "SystemView.h"
#include "galaxy/Polit.h"
#include "galaxy/SystemBody.h"
#include "lua/LuaEngine.h"
#include "lua/LuaFileSystem.h"
#include "pigui/Face.h"
#include "scenegraph/Model.h"
#include "ship/Propulsion.h"
#include "ship/ShipController.h"

const struct EnumItem ENUM_PhysicsObjectType[] = {
	{ "BODY", int(ObjectType::BODY) },
	{ "MODELBODY", int(ObjectType::MODELBODY) },
	{ "SHIP", int(ObjectType::SHIP) },
	{ "PLAYER", int(ObjectType::PLAYER) },
	{ "SPACESTATION", int(ObjectType::SPACESTATION) },
	{ "PLANET", int(ObjectType::PLANET) },
	{ "STAR", int(ObjectType::STAR) },
	{ "CARGOBODY", int(ObjectType::CARGOBODY) },
	{ "MISSILE", int(ObjectType::MISSILE) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipAIError[] = {
	{ "NONE", int(Ship::AIERROR_NONE) },
	{ "GRAV_TOO_HIGH", int(Ship::AIERROR_GRAV_TOO_HIGH) },
	{ "REFUSED_PERM", int(Ship::AIERROR_REFUSED_PERM) },
	{ "PRESS_TOO_HIGH", int(Ship::AIERROR_PRESS_TOO_HIGH) },
	{ "ORBIT_IMPOSSIBLE", int(Ship::AIERROR_ORBIT_IMPOSSIBLE) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipFlightState[] = {
	{ "FLYING", int(Ship::FLYING) },
	{ "DOCKING", int(Ship::DOCKING) },
	{ "UNDOCKING", int(Ship::UNDOCKING) },
	{ "DOCKED", int(Ship::DOCKED) },
	{ "LANDED", int(Ship::LANDED) },
	{ "JUMPING", int(Ship::JUMPING) },
	{ "HYPERSPACE", int(Ship::HYPERSPACE) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipJumpStatus[] = {
	{ "OK", int(Ship::HYPERJUMP_OK) },
	{ "CURRENT_SYSTEM", int(Ship::HYPERJUMP_CURRENT_SYSTEM) },
	{ "NO_DRIVE", int(Ship::HYPERJUMP_NO_DRIVE) },
	{ "INITIATED", int(Ship::HYPERJUMP_INITIATED) },
	{ "DRIVE_ACTIVE", int(Ship::HYPERJUMP_DRIVE_ACTIVE) },
	{ "OUT_OF_RANGE", int(Ship::HYPERJUMP_OUT_OF_RANGE) },
	{ "INSUFFICIENT_FUEL", int(Ship::HYPERJUMP_INSUFFICIENT_FUEL) },
	{ "SAFETY_LOCKOUT", int(Ship::HYPERJUMP_SAFETY_LOCKOUT) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipAlertStatus[] = {
	{ "NONE", int(Ship::ALERT_NONE) },
	{ "SHIP_NEARBY", int(Ship::ALERT_SHIP_NEARBY) },
	{ "SHIP_FIRING", int(Ship::ALERT_SHIP_FIRING) },
	{ "MISSILE_DETECTED", int(Ship::ALERT_MISSILE_DETECTED) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipAICmdName[] = {
	{ "CMD_NONE", int(AICommand::CmdName::CMD_NONE) },
	{ "CMD_DOCK", int(AICommand::CmdName::CMD_DOCK) },
	{ "CMD_FLYTO", int(AICommand::CmdName::CMD_FLYTO) },
	{ "CMD_FLYAROUND", int(AICommand::CmdName::CMD_FLYAROUND) },
	{ "CMD_KILL", int(AICommand::CmdName::CMD_KILL) },
	{ "CMD_KAMIKAZE", int(AICommand::CmdName::CMD_KAMIKAZE) },
	{ "CMD_HOLDPOSITION", int(AICommand::CmdName::CMD_HOLDPOSITION) },
	{ "CMD_FORMATION", int(AICommand::CmdName::CMD_FORMATION) },
	{ 0, 0 },
};

const struct EnumItem ENUM_DualLaserOrientation[] = {
	{ "HORIZONTAL", int(ShipType::DUAL_LASERS_HORIZONTAL) },
	{ "VERTICAL", int(ShipType::DUAL_LASERS_VERTICAL) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipTypeTag[] = {
	{ "NONE", int(ShipType::TAG_NONE) },
	{ "SHIP", int(ShipType::TAG_SHIP) },
	{ "STATIC_SHIP", int(ShipType::TAG_STATIC_SHIP) },
	{ "MISSILE", int(ShipType::TAG_MISSILE) },
	{ 0, 0 },
};

const struct EnumItem ENUM_DockingRefusedReason[] = {
	{ "ClearanceAlreadyGranted", int(SpaceStation::DockingRefusedReason::ClearanceAlreadyGranted) },
	{ "TooFarFromStation", int(SpaceStation::DockingRefusedReason::TooFarFromStation) },
	{ "NoBaysAvailable", int(SpaceStation::DockingRefusedReason::NoBaysAvailable) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ProjectableTypes[] = {
	{ "NONE", int(Projectable::NONE) },
	{ "OBJECT", int(Projectable::OBJECT) },
	{ "L4", int(Projectable::L4) },
	{ "L5", int(Projectable::L5) },
	{ "APOAPSIS", int(Projectable::APOAPSIS) },
	{ "PERIAPSIS", int(Projectable::PERIAPSIS) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ProjectableBases[] = {
	{ "SYSTEMBODY", int(Projectable::SYSTEMBODY) },
	{ "BODY", int(Projectable::BODY) },
	{ "SHIP", int(Projectable::SHIP) },
	{ "PLAYER", int(Projectable::PLAYER) },
	{ "PLANNER", int(Projectable::PLANNER) },
	{ 0, 0 },
};

const struct EnumItem ENUM_SystemViewColorIndex[] = {
	{ "GRID", int(SystemView::GRID) },
	{ "GRID_LEG", int(SystemView::GRID_LEG) },
	{ "SYSTEMBODY", int(SystemView::SYSTEMBODY) },
	{ "SYSTEMBODY_ORBIT", int(SystemView::SYSTEMBODY_ORBIT) },
	{ "PLAYER_ORBIT", int(SystemView::PLAYER_ORBIT) },
	{ "PLANNER_ORBIT", int(SystemView::PLANNER_ORBIT) },
	{ "SELECTED_SHIP_ORBIT", int(SystemView::SELECTED_SHIP_ORBIT) },
	{ "SHIP_ORBIT", int(SystemView::SHIP_ORBIT) },
	{ 0, 0 },
};

const struct EnumItem ENUM_PolitEcon[] = {
	{ "NONE", int(Polit::ECON_NONE) },
	{ "VERY_CAPITALIST", int(Polit::ECON_VERY_CAPITALIST) },
	{ "CAPITALIST", int(Polit::ECON_CAPITALIST) },
	{ "MIXED", int(Polit::ECON_MIXED) },
	{ "PLANNED", int(Polit::ECON_PLANNED) },
	{ 0, 0 },
};

const struct EnumItem ENUM_PolitGovType[] = {
	{ "NONE", int(Polit::GOV_NONE) },
	{ "EARTHCOLONIAL", int(Polit::GOV_EARTHCOLONIAL) },
	{ "EARTHDEMOC", int(Polit::GOV_EARTHDEMOC) },
	{ "EMPIRERULE", int(Polit::GOV_EMPIRERULE) },
	{ "CISLIBDEM", int(Polit::GOV_CISLIBDEM) },
	{ "CISSOCDEM", int(Polit::GOV_CISSOCDEM) },
	{ "LIBDEM", int(Polit::GOV_LIBDEM) },
	{ "CORPORATE", int(Polit::GOV_CORPORATE) },
	{ "SOCDEM", int(Polit::GOV_SOCDEM) },
	{ "EARTHMILDICT", int(Polit::GOV_EARTHMILDICT) },
	{ "MILDICT1", int(Polit::GOV_MILDICT1) },
	{ "MILDICT2", int(Polit::GOV_MILDICT2) },
	{ "EMPIREMILDICT", int(Polit::GOV_EMPIREMILDICT) },
	{ "COMMUNIST", int(Polit::GOV_COMMUNIST) },
	{ "PLUTOCRATIC", int(Polit::GOV_PLUTOCRATIC) },
	{ "DISORDER", int(Polit::GOV_DISORDER) },
	{ 0, 0 },
};

const struct EnumItem ENUM_BodyType[] = {
	{ "GRAVPOINT", int(SystemBody::TYPE_GRAVPOINT) },
	{ "BROWN_DWARF", int(SystemBody::TYPE_BROWN_DWARF) },
	{ "WHITE_DWARF", int(SystemBody::TYPE_WHITE_DWARF) },
	{ "STAR_M", int(SystemBody::TYPE_STAR_M) },
	{ "STAR_K", int(SystemBody::TYPE_STAR_K) },
	{ "STAR_G", int(SystemBody::TYPE_STAR_G) },
	{ "STAR_F", int(SystemBody::TYPE_STAR_F) },
	{ "STAR_A", int(SystemBody::TYPE_STAR_A) },
	{ "STAR_B", int(SystemBody::TYPE_STAR_B) },
	{ "STAR_O", int(SystemBody::TYPE_STAR_O) },
	{ "STAR_M_GIANT", int(SystemBody::TYPE_STAR_M_GIANT) },
	{ "STAR_K_GIANT", int(SystemBody::TYPE_STAR_K_GIANT) },
	{ "STAR_G_GIANT", int(SystemBody::TYPE_STAR_G_GIANT) },
	{ "STAR_F_GIANT", int(SystemBody::TYPE_STAR_F_GIANT) },
	{ "STAR_A_GIANT", int(SystemBody::TYPE_STAR_A_GIANT) },
	{ "STAR_B_GIANT", int(SystemBody::TYPE_STAR_B_GIANT) },
	{ "STAR_O_GIANT", int(SystemBody::TYPE_STAR_O_GIANT) },
	{ "STAR_M_SUPER_GIANT", int(SystemBody::TYPE_STAR_M_SUPER_GIANT) },
	{ "STAR_K_SUPER_GIANT", int(SystemBody::TYPE_STAR_K_SUPER_GIANT) },
	{ "STAR_G_SUPER_GIANT", int(SystemBody::TYPE_STAR_G_SUPER_GIANT) },
	{ "STAR_F_SUPER_GIANT", int(SystemBody::TYPE_STAR_F_SUPER_GIANT) },
	{ "STAR_A_SUPER_GIANT", int(SystemBody::TYPE_STAR_A_SUPER_GIANT) },
	{ "STAR_B_SUPER_GIANT", int(SystemBody::TYPE_STAR_B_SUPER_GIANT) },
	{ "STAR_O_SUPER_GIANT", int(SystemBody::TYPE_STAR_O_SUPER_GIANT) },
	{ "STAR_M_HYPER_GIANT", int(SystemBody::TYPE_STAR_M_HYPER_GIANT) },
	{ "STAR_K_HYPER_GIANT", int(SystemBody::TYPE_STAR_K_HYPER_GIANT) },
	{ "STAR_G_HYPER_GIANT", int(SystemBody::TYPE_STAR_G_HYPER_GIANT) },
	{ "STAR_F_HYPER_GIANT", int(SystemBody::TYPE_STAR_F_HYPER_GIANT) },
	{ "STAR_A_HYPER_GIANT", int(SystemBody::TYPE_STAR_A_HYPER_GIANT) },
	{ "STAR_B_HYPER_GIANT", int(SystemBody::TYPE_STAR_B_HYPER_GIANT) },
	{ "STAR_O_HYPER_GIANT", int(SystemBody::TYPE_STAR_O_HYPER_GIANT) },
	{ "STAR_M_WF", int(SystemBody::TYPE_STAR_M_WF) },
	{ "STAR_B_WF", int(SystemBody::TYPE_STAR_B_WF) },
	{ "STAR_O_WF", int(SystemBody::TYPE_STAR_O_WF) },
	{ "STAR_S_BH", int(SystemBody::TYPE_STAR_S_BH) },
	{ "STAR_IM_BH", int(SystemBody::TYPE_STAR_IM_BH) },
	{ "STAR_SM_BH", int(SystemBody::TYPE_STAR_SM_BH) },
	{ "PLANET_GAS_GIANT", int(SystemBody::TYPE_PLANET_GAS_GIANT) },
	{ "PLANET_ASTEROID", int(SystemBody::TYPE_PLANET_ASTEROID) },
	{ "PLANET_TERRESTRIAL", int(SystemBody::TYPE_PLANET_TERRESTRIAL) },
	{ "STARPORT_ORBITAL", int(SystemBody::TYPE_STARPORT_ORBITAL) },
	{ "STARPORT_SURFACE", int(SystemBody::TYPE_STARPORT_SURFACE) },
	{ 0, 0 },
};

const struct EnumItem ENUM_BodySuperType[] = {
	{ "NONE", int(SystemBody::SUPERTYPE_NONE) },
	{ "STAR", int(SystemBody::SUPERTYPE_STAR) },
	{ "ROCKY_PLANET", int(SystemBody::SUPERTYPE_ROCKY_PLANET) },
	{ "GAS_GIANT", int(SystemBody::SUPERTYPE_GAS_GIANT) },
	{ "STARPORT", int(SystemBody::SUPERTYPE_STARPORT) },
	{ 0, 0 },
};

const struct EnumItem ENUM_DetailLevel[] = {
	{ "VERY_LOW", int(LuaEngine::DETAIL_VERY_LOW) },
	{ "LOW", int(LuaEngine::DETAIL_LOW) },
	{ "MEDIUM", int(LuaEngine::DETAIL_MEDIUM) },
	{ "HIGH", int(LuaEngine::DETAIL_HIGH) },
	{ "VERY_HIGH", int(LuaEngine::DETAIL_VERY_HIGH) },
	{ 0, 0 },
};

const struct EnumItem ENUM_FileSystemRoot[] = {
	{ "USER", int(LuaFileSystem::ROOT_USER) },
	{ "DATA", int(LuaFileSystem::ROOT_DATA) },
	{ 0, 0 },
};

const struct EnumItem ENUM_PiGuiFaceFlags[] = {
	{ "RAND", int(PiGui::Face::RAND) },
	{ "MALE", int(PiGui::Face::MALE) },
	{ "FEMALE", int(PiGui::Face::FEMALE) },
	{ "ARMOUR", int(PiGui::Face::ARMOUR) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ModelDebugFlags[] = {
	{ "NONE", int(SceneGraph::Model::DEBUG_NONE) },
	{ "BBOX", int(SceneGraph::Model::DEBUG_BBOX) },
	{ "COLLMESH", int(SceneGraph::Model::DEBUG_COLLMESH) },
	{ "WIREFRAME", int(SceneGraph::Model::DEBUG_WIREFRAME) },
	{ "TAGS", int(SceneGraph::Model::DEBUG_TAGS) },
	{ "DOCKING", int(SceneGraph::Model::DEBUG_DOCKING) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipTypeThruster[] = {
	{ "REVERSE", int(Thruster::THRUSTER_REVERSE) },
	{ "FORWARD", int(Thruster::THRUSTER_FORWARD) },
	{ "UP", int(Thruster::THRUSTER_UP) },
	{ "DOWN", int(Thruster::THRUSTER_DOWN) },
	{ "LEFT", int(Thruster::THRUSTER_LEFT) },
	{ "RIGHT", int(Thruster::THRUSTER_RIGHT) },
	{ 0, 0 },
};

const struct EnumItem ENUM_PropulsionFuelStatus[] = {
	{ "OK", int(Propulsion::FUEL_OK) },
	{ "WARNING", int(Propulsion::FUEL_WARNING) },
	{ "EMPTY", int(Propulsion::FUEL_EMPTY) },
	{ 0, 0 },
};

const struct EnumItem ENUM_ShipControllerFlightControlState[] = {
	{ "CONTROL_MANUAL", int(FlightControlState::CONTROL_MANUAL) },
	{ "CONTROL_FIXSPEED", int(FlightControlState::CONTROL_FIXSPEED) },
	{ "CONTROL_FIXHEADING_FORWARD", int(FlightControlState::CONTROL_FIXHEADING_FORWARD) },
	{ "CONTROL_FIXHEADING_BACKWARD", int(FlightControlState::CONTROL_FIXHEADING_BACKWARD) },
	{ "CONTROL_FIXHEADING_NORMAL", int(FlightControlState::CONTROL_FIXHEADING_NORMAL) },
	{ "CONTROL_FIXHEADING_ANTINORMAL", int(FlightControlState::CONTROL_FIXHEADING_ANTINORMAL) },
	{ "CONTROL_FIXHEADING_RADIALLY_INWARD", int(FlightControlState::CONTROL_FIXHEADING_RADIALLY_INWARD) },
	{ "CONTROL_FIXHEADING_RADIALLY_OUTWARD", int(FlightControlState::CONTROL_FIXHEADING_RADIALLY_OUTWARD) },
	{ "CONTROL_FIXHEADING_KILLROT", int(FlightControlState::CONTROL_FIXHEADING_KILLROT) },
	{ "CONTROL_AUTOPILOT", int(FlightControlState::CONTROL_AUTOPILOT) },
	{ 0, 0 },
};

const struct EnumTable ENUM_TABLES[] = {
	{ "PhysicsObjectType", ENUM_PhysicsObjectType },
	{ "ShipAIError", ENUM_ShipAIError },
	{ "ShipFlightState", ENUM_ShipFlightState },
	{ "ShipJumpStatus", ENUM_ShipJumpStatus },
	{ "ShipAlertStatus", ENUM_ShipAlertStatus },
	{ "ShipAICmdName", ENUM_ShipAICmdName },
	{ "DualLaserOrientation", ENUM_DualLaserOrientation },
	{ "ShipTypeTag", ENUM_ShipTypeTag },
	{ "DockingRefusedReason", ENUM_DockingRefusedReason },
	{ "ProjectableTypes", ENUM_ProjectableTypes },
	{ "ProjectableBases", ENUM_ProjectableBases },
	{ "SystemViewColorIndex", ENUM_SystemViewColorIndex },
	{ "PolitEcon", ENUM_PolitEcon },
	{ "PolitGovType", ENUM_PolitGovType },
	{ "BodyType", ENUM_BodyType },
	{ "BodySuperType", ENUM_BodySuperType },
	{ "DetailLevel", ENUM_DetailLevel },
	{ "FileSystemRoot", ENUM_FileSystemRoot },
	{ "PiGuiFaceFlags", ENUM_PiGuiFaceFlags },
	{ "ModelDebugFlags", ENUM_ModelDebugFlags },
	{ "ShipTypeThruster", ENUM_ShipTypeThruster },
	{ "PropulsionFuelStatus", ENUM_PropulsionFuelStatus },
	{ "ShipControllerFlightControlState", ENUM_ShipControllerFlightControlState },
	{ 0, 0 },
};

const struct EnumTable ENUM_TABLES_PUBLIC[] = {
	{ "PhysicsObjectType", ENUM_PhysicsObjectType },
	{ "ShipAIError", ENUM_ShipAIError },
	{ "ShipFlightState", ENUM_ShipFlightState },
	{ "ShipJumpStatus", ENUM_ShipJumpStatus },
	{ "ShipAlertStatus", ENUM_ShipAlertStatus },
	{ "ShipAICmdName", ENUM_ShipAICmdName },
	{ "DualLaserOrientation", ENUM_DualLaserOrientation },
	{ "ShipTypeTag", ENUM_ShipTypeTag },
	{ "DockingRefusedReason", ENUM_DockingRefusedReason },
	{ "ProjectableTypes", ENUM_ProjectableTypes },
	{ "ProjectableBases", ENUM_ProjectableBases },
	{ "SystemViewColorIndex", ENUM_SystemViewColorIndex },
	{ "PolitEcon", ENUM_PolitEcon },
	{ "PolitGovType", ENUM_PolitGovType },
	{ "BodyType", ENUM_BodyType },
	{ "BodySuperType", ENUM_BodySuperType },
	{ "DetailLevel", ENUM_DetailLevel },
	{ "FileSystemRoot", ENUM_FileSystemRoot },
	{ "PiGuiFaceFlags", ENUM_PiGuiFaceFlags },
	{ "ModelDebugFlags", ENUM_ModelDebugFlags },
	{ "ShipTypeThruster", ENUM_ShipTypeThruster },
	{ "PropulsionFuelStatus", ENUM_PropulsionFuelStatus },
	{ "ShipControllerFlightControlState", ENUM_ShipControllerFlightControlState },
	{ 0, 0 },
};
