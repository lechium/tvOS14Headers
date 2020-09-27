/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface ATUserDefaults : NSObject {

	NSMutableDictionary* _defaults;

}

@property (assign,nonatomic) BOOL hasCompletedDataMigration; 
@property (nonatomic,retain) NSDictionary * diskUsageInfo; 
+(void)synchronize;
+(id)sharedInstance;
+(id)readOnlyDefaults;
-(id)init;
-(void)setHasCompletedDataMigration:(BOOL)arg1 ;
-(BOOL)hasCompletedDataMigration;
-(void)setDiskUsageInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)diskUsageInfo;
-(void)_updateDefaults;
-(id)allHosts;
-(void)updateHostInfo:(id)arg1 disabledAssetTypes:(id)arg2 ;
-(void)updateLastSyncWithHostLibrary:(id)arg1 ;
-(void)removeHost:(id)arg1 ;
-(id)hostInfoForIdentifier:(id)arg1 ;
@end
