/*
    This file is part of SourcePawn SteamWorks.

    SourcePawn SteamWorks is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, as per version 3 of the License.

    SourcePawn SteamWorks is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with SourcePawn SteamWorks.  If not, see <http://www.gnu.org/licenses/>.
	
	Author: Kyle Sanderson (KyleS).
*/

#ifndef _INCLUDE_SOURCEMOD_EXTENSION_SWGSDETOURS_H_
#define _INCLUDE_SOURCEMOD_EXTENSION_SWGSDETOURS_H_

#if defined _INCLUDE_SOURCEMOD_DETOURS_H_
class CDetour;
#endif

#include "smsdk_ext.h"
#include "steam_gameserver.h"
#include "CDetour/detours.h"

class SteamWorksGSDetours
{
	public:
		SteamWorksGSDetours();
		~SteamWorksGSDetours();
		
	private:
		CDetour *m_pSafeInitDetour;
		CDetour *m_pShutdownDetour;
};

#include "extension.h"

#endif // _INCLUDE_SOURCEMOD_EXTENSION_SWGSDETOURS_H_
