/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@interface MRSendPackedVirtualTouchEventMessage : MRProtocolMessage

@property (nonatomic,readonly) MRHIDTouchEvent event; 
@property (nonatomic,readonly) unsigned long long virtualDeviceID; 
-(id)description;
-(unsigned long long)type;
-(unsigned long long)priority;
-(MRHIDTouchEvent)event;
-(unsigned long long)virtualDeviceID;
-(id)initWithTouchEvent:(MRHIDTouchEvent)arg1 virtualDeviceID:(unsigned long long)arg2 ;
@end
