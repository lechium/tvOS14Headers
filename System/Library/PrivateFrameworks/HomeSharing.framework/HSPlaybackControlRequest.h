/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSPlaybackControlRequest : HSRequest {

	unsigned _interfaceID;
	long long _controlCommand;

}

@property (nonatomic,readonly) long long controlCommand;              //@synthesize controlCommand=_controlCommand - In the implementation block
@property (nonatomic,readonly) unsigned interfaceID;                  //@synthesize interfaceID=_interfaceID - In the implementation block
-(unsigned)interfaceID;
-(id)initWithInterfaceID:(unsigned)arg1 controlCommand:(long long)arg2 ;
-(long long)controlCommand;
@end

