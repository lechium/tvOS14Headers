/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRModifyOutputContextRequestMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned contextType; 
@property (nonatomic,readonly) NSArray * addingOutputDeviceUIDs; 
@property (nonatomic,readonly) NSArray * removingOutputDeviceUIDs; 
@property (nonatomic,readonly) NSArray * settingOutputDeviceUIDs; 
+(id)addDevicesRequestMessageWithContextType:(unsigned)arg1 outputDeviceUIDs:(id)arg2 ;
+(id)removeDevicesRequestMessageWithContextType:(unsigned)arg1 outputDeviceUIDs:(id)arg2 ;
+(id)setDevicesRequestMessageWithContextType:(unsigned)arg1 outputDeviceUIDs:(id)arg2 ;
-(id)description;
-(unsigned long long)type;
-(unsigned)contextType;
-(id)initWithContextType:(unsigned)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 ;
-(NSArray *)addingOutputDeviceUIDs;
-(NSArray *)removingOutputDeviceUIDs;
-(NSArray *)settingOutputDeviceUIDs;
@end
