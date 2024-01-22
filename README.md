**UE4.27.2 Online Subsystem Steam FOnlineAsyncTaskSteamFindLobbiesForFindSessions returns false when hosting a listen server**

Found an issue following the Steamworks SDK update commit in UE4.27.2

Updating the Steamworks SDK to 1.51 · EpicGames/UnrealEngine@d9353c9 (github.com)
​
Listen server host can no longer return results from FOnlineAsysncTaskSteamFindLobbieForFindSessions resulting in the following log.

[2023.12.15-01.08.38:606][197]LogOnlineSession: Warning: STEAM: Unable to set search parameter LOBBYSEARCH: Value=true : Equals : -1

[2023.12.15-01.08.53:682][359]LogOnline: Warning: OSS: Async task 'FOnlineAsyncTaskSteamFindLobbiesForFindSessions bWasSuccessful: 0 NumResults: 4' failed in 15.077619 seconds

The results will actually return counted out as NumResults in the log but the return value is false after a timeout.

**​The fix is the TArray Function in not returning correctly (it's missing an equality operator) in OnlineSessionsInterfaceSteam.h**
Line 400 and 413.
JoinedLobbyList.RemoveSingleSwap(LobbyId.AsShared());

**Place the OnlineSubsystemSteam Folder in your Project/Plugins Directory to override the engine plugin**

**Note:**
https://forums.unrealengine.com/t/cant-find-session-using-advanced-sessions/828468
https://www.reddit.com/r/unrealengine/comments/sk3p5l/need_help_with_advanced_sessions_v427/
https://stackoverflow.com/questions/69162942/steam-failed-to-initialize-game-server-with-steam-warning-unable-to-host

There are quite a bit of concerns and forum post out there regarding steam sessions behavior with devs unsure as to exactly what is going on as some report session results working and others not.
It appears the default session node also no longer worked due to missing "bUseLobbiesWhenAvailable"
The Following Plugins expand the default blueprint nodes to allow you to create sessions that use the new bool

SteamCore by eelDev - https://www.unrealengine.com/marketplace/en-US/product/steamcore

AdvancedSessions - https://github.com/mordentral/AdvancedSessionsPlugin


**Known Issues (netGUID cache logs after seamless server travel)**
Frequently the Client and Server will desync NetGUID when using the non-asyncronous path (cvar declared and used in PackageMapClient.h)

logging the following on the client

[[2024.01.18-01.30.44:124][442]LogNetPackageMap: Error: UPackageMapClient::SerializeNewActor. Unresolved Archetype GUID. Guid not registered! NetGUID: 953.
[2024.01.18-01.30.44:124][442]LogNetPackageMap: Error: UPackageMapClient::SerializeNewActor Unable to read Archetype for NetGUID 3680 / 953]

And the Following on the server

[[2024.01.18-01.42.36:018][337]LogNet: Server connection received: ActorChannelFailure [UChannel] ChIndex: 0, Closing: 0 [UNetConnection] RemoteAddr: 76561198960375045:7777, Name: SteamNetConnection_2147469913, Driver: GameNetDriver SteamNetDriver_2147470633, IsServer: YES, PC: Steam_VR_Player_Controller_C_2147469909, Owner: Steam_VR_Player_Controller_C_2147469909, UniqueId: Steam:REMOVEDTHISINTENTIONALLY]

The following cvars seem to be linked to this warning and behavior. 

net.FilterGuidRemapping - When enabled this will remove destroyed and parent guids from unmapped list (Default Enabled)

net.AllowClientRemapCacheObject - When enabled, we will allow clients to remap read only cache objects and keep the same NetGUID. (Default Disabled)

The above cvars weren't documented for UE4.27 but UE5 docs are here https://docs.unrealengine.com/5.3/en-US/console-commands-for-network-debugging-in-unreal-engine/

The Following added to the **engine.ini** **SEEMS** to resolve. **STILL TESTING**

[SystemSettings]

net.AllowAsyncLoading=0

net.AllowClientRemapCacheObject=1

net.FilterGuidRemapping=0 
