**UE4.27.2 Online Subsystem Steam FOnlineAsyncTaskSteamFindLobbiesForFindSessions returns false when hosting a listen server**
Found an issue following the Steamworks SDK update commit in UE4.27.2

Updating the Steamworks SDK to 1.51 · EpicGames/UnrealEngine@d9353c9 (github.com)

​

Listen server host can no longer return results from FOnlineAsysncTaskSteamFindLobbieForFindSessions resulting in the following log.

[2023.12.15-01.08.38:606][197]LogOnlineSession: Warning: STEAM: Unable to set search parameter LOBBYSEARCH: Value=true : Equals : -1

[2023.12.15-01.08.53:682][359]LogOnline: Warning: OSS: Async task 'FOnlineAsyncTaskSteamFindLobbiesForFindSessions bWasSuccessful: 0 NumResults: 4' failed in 15.077619 seconds

**​The fix is the TArray Function in  not returning correclty when the ref is a pointer in OnlineSessionsInterfaceSteam.h**
Line 400 and 413. 
JoinedLobbyList.RemoveSingleSwap(LobbyId.AsShared());

The results will actually return counted out as NumResults in the log but the return value is false after a timeout.

**Note:**
There are quite a bit of concerns and forum post out there regarding this behavior with devs unsure as to exactly what is going on as some report session results working and others not. 
It appears the default session node also no longer worked due to missing "bUseLobbiesWhenAvailable"
The Following Plugins expand the default blueprint nodes to allow you to create sessions that use the new bool
SteamCore by eelDev - https://www.unrealengine.com/marketplace/en-US/product/steamcore
AdvancedSessions - https://github.com/mordentral/AdvancedSessionsPlugin
