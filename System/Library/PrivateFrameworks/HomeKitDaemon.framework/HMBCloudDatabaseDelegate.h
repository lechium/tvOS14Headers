/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMBCloudDatabaseDelegate <NSObject>
@optional
-(void)cloudDatabase:(id)arg1 didCreateZoneWithID:(id)arg2;
-(id)cloudDatabase:(id)arg1 willRemoveZoneWithID:(id)arg2;
-(void)cloudDatabase:(id)arg1 didRemoveZoneWithID:(id)arg2;
-(void)cloudDatabase:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;
-(void)cloudDatabase:(id)arg1 didChangeManateeKeysForZoneWithID:(id)arg2;
-(void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onZone:(id)arg4;
-(void)cloudDatabase:(id)arg1 encounteredError:(id)arg2 withOperation:(id)arg3 onContainer:(id)arg4;

@end

