/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFilterProvider.h>

@interface NEFilterPacketProvider : NEFilterProvider {

	/*^block*/id _packetHandler;

}

@property (copy) id packetHandler;              //@synthesize packetHandler=_packetHandler - In the implementation block
-(void)setPacketHandler:(id)arg1 ;
-(id)packetHandler;
-(void)allowPacket:(id)arg1 ;
-(id)delayCurrentPacket:(id)arg1 ;
@end
