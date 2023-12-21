# UE4.27_OnlineSubsystemSteamFix

Many issues were reported with the default behavior of the module after UE4.26 with the most notable being the find sessions async call failure from listen server hosting clients (clients wanting to fetch a sessions list but who are hosting a session)
doing this call would result in the following time out log and failure.

- LogOnline: Warning: OSS: Async task 'FOnlineAsyncTaskSteamFindLobbiesForFindSessions bWasSuccessful: 0 NumResults: 4' failed in 15.096867 seconds

This would result in the inablity to control client travel from listen servers as they could no longer retrieve session id's and would also break other features like matchmaking. 

Clone and place into your UE4.27.2 project plugins directory to use instead of the binary release version.

Pair with one of the following for blueprint project support.

- AdvancedSessions (https://github.com/mordentral/AdvancedSessionsPlugin).

- SteamCore by eelDev (https://www.unrealengine.com/marketplace/en-US/product/5300c1dc33f74524bcad23bdeb9b2196)
