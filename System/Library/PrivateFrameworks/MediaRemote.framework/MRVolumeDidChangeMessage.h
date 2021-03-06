/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRVolumeDidChangeMessage : MRProtocolMessage

@property (nonatomic,readonly) float volume; 
@property (nonatomic,readonly) NSString * endpointUID; 
@property (nonatomic,readonly) NSString * outputDeviceUID; 
-(unsigned long long)type;
-(float)volume;
-(NSString *)outputDeviceUID;
-(NSString *)endpointUID;
-(id)initWithVolume:(float)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3 ;
@end

